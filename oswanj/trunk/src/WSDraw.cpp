/*
$Date: 2009-09-28 06:43:18 +0900 (ζ, 28 9 2009) $
$Rev$
*/

#include "WSDraw.h"
#include "WS.h"
#include "WSInput.h"
#include "WSRender.h"

extern HWND hWnd;
int	Kerorikan = 0;
static enum DRAWSIZE DrawSize = DS_1;           // `ζTCY tXN[Ax1 x2 x3
static int DrawMode = 0;                        // c‘tO 0:‘
static LPDIRECT3D9                 pD3D;        // IDirect3D9C^[tFCXΦΜ|C^
static LPDIRECT3DDEVICE9           pD3DDevice;  // IDirect3DDevice9C^[tFCXΦΜ|C^
static D3DPRESENT_PARAMETERS       D3DPP;       // foCXΜv[e[Vp[^
static LPDIRECT3DVERTEXBUFFER9     pMyVB;       // Vertex Buffer
static LPDIRECT3DTEXTURE9          pTexture;    // Texture
static LPDIRECT3DSURFACE9          pSurface;    // Surface
static LPDIRECT3DTEXTURE9          pSegTexture;
static LPDIRECT3DSURFACE9          pSegSurface;

// Έ_PΒΜf[^^
struct MY_VERTEX{
    D3DXVECTOR3 p;      // Κu
    DWORD       color;  // F
    D3DXVECTOR2 t;      // eNX`[ΜζΜΚu
};
// MY_VERTEXΜtH[}bgέθ
#define MY_VERTEX_FVF  (D3DFVF_XYZ | D3DFVF_DIFFUSE  | D3DFVF_TEX1)
#define SAFE_RELEASE(p) { if(p) { (p)->Release(); (p)=NULL; } }

//-------------------------------------------------------------
// _[Μϊ»
// ψ
//      isFullScreen : tXN[ΜκTRUE
// ίθl
//      ¬χ΅½ηS_OK 
//-------------------------------------------------------------
HRESULT drawInitialize(BOOL isFullScreen)
{
    D3DDISPLAYMODE d3ddm;

    // Direct3D9IuWFNgΜμ¬
    if((pD3D = Direct3DCreate9(D3D_SDK_VERSION)) == NULL)
    {
        return E_FAIL;  // ζΎΈs
    }
    // »έΜfBXvC[hπζΎ
    if(FAILED(pD3D->GetAdapterDisplayMode(D3DADAPTER_DEFAULT, &d3ddm)))
    {
        return E_FAIL;
    }
    // foCXΜv[e[Vp[^πϊ»
    ZeroMemory(&D3DPP, sizeof(D3DPRESENT_PARAMETERS));
    if(isFullScreen) {                                  // tXN[Μκ
        D3DPP.Windowed              = FALSE;            // tXN[\¦Μwθ
        D3DPP.BackBufferWidth       = 800;              // tXN[Μ‘
        D3DPP.BackBufferHeight      = 600;              // tXN[Μc
    }
    else {
        D3DPP.Windowed              = TRUE;             // EChEΰ\¦Μwθ
        D3DPP.BackBufferWidth       = 2016;             // 224Ζ144ΜΕ¬φ{
        D3DPP.BackBufferHeight      = 2016;
    }
    D3DPP.BackBufferCount           = 1;
    D3DPP.BackBufferFormat          = d3ddm.Format;                     // J[[hΜwθ
    D3DPP.SwapEffect                = D3DSWAPEFFECT_DISCARD;            // 
    D3DPP.EnableAutoDepthStencil    = TRUE;                             // G[Ξτ
    D3DPP.AutoDepthStencilFormat    = D3DFMT_D16;                       // G[Ξτ
    D3DPP.PresentationInterval      = D3DPRESENT_INTERVAL_IMMEDIATE;    // Ό―ϊ΅Θ’
    // fBXvCA_v^π\·½ίΜfoCXπμ¬
    // `ζΖΈ_πn[hEFAΕsΘ€
    if(FAILED(pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &D3DPP, &pD3DDevice)))
    {
        // γLΜέθͺΈs΅½η
        // `ζπn[hEFAΕs’AΈ_ΝCPUΕsΘ€
        if(FAILED(pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &D3DPP, &pD3DDevice)))
        {
            // ϊ»Έs
			MessageBox(hWnd, TEXT("OtBbN`bvͺ’ΞΕ·"), TEXT("Direct3D Error"), MB_OK);
            return E_FAIL;
        }
    }
    return S_OK;
}

//-------------------------------------------------------------
// IΉ
//-------------------------------------------------------------
void drawFinalize(void)
{
    // foCXIuWFNgΜπϊ
    SAFE_RELEASE(pD3DDevice);
    // DirectXGraphicsΜπϊ
    SAFE_RELEASE(pD3D);
}

//-------------------------------------------------------------
// V[πΆ¬
// ίθl
//      ¬χ΅½ηS_OK
//-------------------------------------------------------------
HRESULT drawCreate(void)
{
    if(pD3DDevice == 0)
    {
        return E_FAIL;
    }
    drawDestroy();
    //--------------------------------------
    // IuWFNgΜΈ_obt@πΆ¬
    //--------------------------------------
    // 8ΒΜΈ_©ηΘιΈ_obt@πμι
    if(FAILED( pD3DDevice->CreateVertexBuffer(8 * sizeof(MY_VERTEX), D3DUSAGE_WRITEONLY, MY_VERTEX_FVF, D3DPOOL_MANAGED, &pMyVB, NULL)))
    {
        return E_FAIL;
    }
    pD3DDevice->CreateTexture(256, 256, 1, 0, D3DFMT_A4R4G4B4, D3DPOOL_MANAGED, &pTexture, NULL);
    pTexture->GetSurfaceLevel(0, &pSurface);
    pD3DDevice->CreateTexture(32, 1024, 1, 0, D3DFMT_A4R4G4B4, D3DPOOL_MANAGED, &pSegTexture, NULL);
    pSegTexture->GetSurfaceLevel(0, &pSegSurface);
    //--------------------------------------
    // eNX`Xe[WΜέθ
    //--------------------------------------
    pD3DDevice->SetTextureStageState(0, D3DTSS_COLOROP,   D3DTOP_SELECTARG1 );
    pD3DDevice->SetTextureStageState(0, D3DTSS_COLORARG1, D3DTA_TEXTURE );
    //--------------------------------------
    // _OXe[gp[^Μέθ
    //--------------------------------------
    // ΌΚ`ζ[hΜwθ
    pD3DDevice->SetRenderState(D3DRS_CULLMODE, D3DCULL_NONE);
    // fBUOπsΘ€iiΏ`ζj
    pD3DDevice->SetRenderState(D3DRS_DITHERENABLE, TRUE);
    // m[CeBO[h   
    pD3DDevice->SetRenderState(D3DRS_LIGHTING, FALSE);
    return S_OK;
}

//-------------------------------------------------------------
// V[Μjό
//-------------------------------------------------------------
void drawDestroy(void)
{
    SAFE_RELEASE(pSurface);
    SAFE_RELEASE(pTexture);
    SAFE_RELEASE(pSegSurface);
    SAFE_RELEASE(pSegTexture);
    SAFE_RELEASE(pMyVB);
}

//-------------------------------------------------------------
// `ζ
//-------------------------------------------------------------
#define MAIN_X (224.0f/256.0f)
#define MAIN_Y (144.0f/256.0f)
#define MAIN_W (2 * 224.0f/234.0f - 1.0f)
#define SEG_X (4 * 8.0f/32.0f)
#define SEG_Y (4 * 144.0f/1024.0f)
#define SEG_W (1.0f - 2 * 8.0f/234.0f)
#define KERO 0.0075f
void drawDraw()
{
    if(pD3DDevice == 0)
    {
        return;
    }
    if(pMyVB == 0)
    {
        return;
    }
    // ζf[^πeNX`Ι]
    D3DLOCKED_RECT lockRect;
    int x, y, pitch;
    WORD *p;
    pSurface->LockRect(&lockRect, NULL, D3DLOCK_DISCARD);
    p = FrameBuffer[0] + 8;
    pitch = lockRect.Pitch / 2;
    for (y = 0; y < 144; y++)
    {
        for (x = 0; x < 224; x++)
        {
            *((WORD*)lockRect.pBits + pitch * y + x) = *p++;
        }
        p += 32;
    }
    pSurface->UnlockRect();
    // t»ZOgf[^πeNX`Ι]
    RenderSegment();
    pSegSurface->LockRect(&lockRect, NULL, D3DLOCK_DISCARD);
    p = SegmentBuffer;
    pitch = lockRect.Pitch / 2;
    for (y = 0; y < 144 * 4; y++)
    {
        for (x = 0; x < 32; x++)
        {
            *((WORD*)lockRect.pBits + pitch * y + x) = *p++;
        }
    }
    pSegSurface->UnlockRect();
    //Έ_obt@Μgπίι
    MY_VERTEX* v;
    pMyVB->Lock( 0, 0, (void**)&v, 0 );
	if (Kerorikan)
	{
		// Έ_ΐWΜέθ
		v[0].p = D3DXVECTOR3(-112*KERO,  72*KERO, 0.0f);
		v[1].p = D3DXVECTOR3( 112*KERO,  72*KERO, 0.0f);
		v[2].p = D3DXVECTOR3(-112*KERO, -72*KERO, 0.0f);
		v[3].p = D3DXVECTOR3( 112*KERO, -72*KERO, 0.0f);
		v[4].p = D3DXVECTOR3( 114*KERO,  72*KERO, 0.0f);
		v[5].p = D3DXVECTOR3( 122*KERO,  72*KERO, 0.0f);
		v[6].p = D3DXVECTOR3( 114*KERO, -72*KERO, 0.0f);
		v[7].p = D3DXVECTOR3( 122*KERO, -72*KERO, 0.0f);
	}
	else
	{
		// Έ_ΐWΜέθ
		v[0].p = D3DXVECTOR3(-1.0f,  1.0f, 0.0f);
		v[1].p = D3DXVECTOR3(MAIN_W, 1.0f, 0.0f);
		v[2].p = D3DXVECTOR3(-1.0f, -1.0f, 0.0f);
		v[3].p = D3DXVECTOR3(MAIN_W,-1.0f, 0.0f);
		v[4].p = D3DXVECTOR3(SEG_W,  1.0f, 0.0f);
		v[5].p = D3DXVECTOR3( 1.0f,  1.0f, 0.0f);
		v[6].p = D3DXVECTOR3(SEG_W, -1.0f, 0.0f);
		v[7].p = D3DXVECTOR3( 1.0f, -1.0f, 0.0f);
	}
	// eNX`ΐWΜέθ
	v[0].t = D3DXVECTOR2(0.0f, 0.0f);
	v[1].t = D3DXVECTOR2(MAIN_X, 0.0f);
	v[2].t = D3DXVECTOR2(0.0f, MAIN_Y);
	v[3].t = D3DXVECTOR2(MAIN_X, MAIN_Y);
	v[4].t = D3DXVECTOR2(0.0f, 0.0f);
	v[5].t = D3DXVECTOR2(SEG_X, 0.0f);
	v[6].t = D3DXVECTOR2(0.0f, SEG_Y);
	v[7].t = D3DXVECTOR2(SEG_X, SEG_Y);
    // Έ_J[Μέθ
    v[0].color = v[1].color = v[2].color = v[3].color = D3DXCOLOR(1.0f,1.0f,1.0f,1.0f);
    v[4].color = v[5].color = v[6].color = v[7].color = D3DXCOLOR(1.0f,1.0f,1.0f,1.0f);
    pMyVB->Unlock();
    // ρ]
    D3DXMATRIX mat;
    D3DXMatrixIdentity(&mat);
    // ΞίiΆatan(0.5)ρ]j
    if (Kerorikan)
    {
        D3DXMatrixRotationZ(&mat, 0.4636476f); // atanf(0.5f)ΎΖΕK»³κΘ’©ΰ΅κΘ’ΜΕ
    }
    // ciΆ90xρ]j
	else if (DrawMode & 0x01)
	{
        D3DXMatrixRotationZ(&mat, D3DXToRadian(90));
	}
    // `ζJnιΎ
    if(SUCCEEDED(pD3DDevice->BeginScene()))
    {
        pD3DDevice->Clear(0, NULL, D3DCLEAR_TARGET, 0xFF666666, 0.0f, 0);
        pD3DDevice->SetStreamSource(0, pMyVB, 0, sizeof(MY_VERTEX));
        pD3DDevice->SetFVF(MY_VERTEX_FVF);
        pD3DDevice->SetTexture( 0, pTexture);
        pD3DDevice->DrawPrimitive(D3DPT_TRIANGLESTRIP, 0, 2); // 0ΤΜΈ_©ηOp`π2Β
        pD3DDevice->SetTexture( 0, pSegTexture);
        pD3DDevice->DrawPrimitive(D3DPT_TRIANGLESTRIP, 4, 2); // 4ΤΜΈ_©ηOp`π2Β
        pD3DDevice->SetTransform(D3DTS_VIEW, &mat);
        // `ζIΉιΎ
        pD3DDevice->EndScene();
    }
    // `ζΚΜ]
    if(FAILED(pD3DDevice->Present(NULL, NULL, NULL, NULL)))
    {
        // foCXΑΈ©ηA
        pD3DDevice->Reset(&D3DPP);
    }
}

//-------------------------------------------------------------
void WsResize(void)
{
    RECT wind;
    RECT wind2;
    int  lcdHeight = 144;
    int  lcdWidth  = 224 + 10; // +10ΝZOgͺ
    int  client_width;
    int  client_height;

    if (Kerorikan)
    {
        client_width  = 256 * DrawSize;
        client_height = 256 * DrawSize;
    }
    else if (DrawMode & 0x01)
    {
        client_width  = lcdHeight * DrawSize;
        client_height = lcdWidth  * DrawSize;
    }
    else
    {
        client_width  = lcdWidth  * DrawSize;
        client_height = lcdHeight * DrawSize;
    }
    wind.top    = 0;
    wind.left   = 0;
    wind.right  = client_width;
    wind.bottom = client_height;
    AdjustWindowRectEx(&wind, WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX,
        TRUE, WS_EX_APPWINDOW | WS_EX_ACCEPTFILES);
    wind2 = wind;
    SendMessage(hWnd, WM_NCCALCSIZE, FALSE, (LPARAM) &wind2);
    SetWindowPos(hWnd, NULL, 0, 0,
        (wind.right  - wind.left) + client_width  - (wind2.right  - wind2.left),
        (wind.bottom - wind.top ) + client_height - (wind2.bottom - wind2.top ),
        SWP_NOMOVE | SWP_NOZORDER | SWP_SHOWWINDOW);
}

//-------------------------------------------------------------
int SetDrawMode(int Mode)
{
    if(DrawMode != Mode)
    {
        DrawMode = Mode;
        SetKeyMap(Mode);
        WsResize();
    }
    return 0;
}

//-------------------------------------------------------------
int SetDrawSize(enum DRAWSIZE Size)
{
    DrawSize = Size;
    WsResize();
    return 0;
}

