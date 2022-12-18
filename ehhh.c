gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0,
G_TX_RENDERTILE,0,
G_TX_MIRROR, 5, G_TX_NOLOD, 
G_TX_NOMIRROR, 5, G_TX_NOLOD), 
gsDPTextureRectangle(50<<2, 50<<2, 150<<2, 150<<2,
G_TX_RENDERTILE,
32<<5, 0, 
1<<10, 1<<10),

gsDPTextureRectangle(50<<2, 50<<2, 98<<2, 92<<2,
G_TX_RENDERTILE,
0, 41<<5,
1<<10, ((-1)<<10)&0xffff), 

gsDPSetTileSize(G_TX_RENDERTILE, 50, 50, 82, 82),
gsDPTextureRectangle(50<<2, 50<<2, 82<<2, 82<<2,
G_TX_RENDERTILE,
0, 0,
1<<10, 1<<10),
gsDPSetTileSize(G_TX_RENDERTILE, 80, 100, 112, 132),
gsDPTextureRectangle(100<<2, 100<<2, 132<<2, 132<<2,
G_TX_RENDERTILE,
0, 0,
1<<10, 1<<10),

float xpos = 10.375, ypos = 19.432;
int xi, xf, yi, yf;
xi = (int) xpos;
yi = (int) ypos;
xf = 32 - 32 * (xpos - xi);
yf = 32 - 32 * (ypos - yi);
gDPTextureRectangle(glistp++,
xi<<2, yi<<2, (xi+32)<<2, (yi+32)<<2,
G_TX_RENDERTILE,
xf, yf,
1<<10, 1<<10)



#define MULTIBIT_ALPHA 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL1
gsDPSetCyleType(G_CYC_2CYCLE),
gsDPSetTextureLOD(G_TL_TILE
gsDPSetCombineMode(MULTIBIT_ALPHA, G_CC_PASS2),
gsDPSetRenderMode(G_RM_AA_TEX_EDGE, G_RM_AA_TEX_EDGE2),

gsDPLoadMultiTile(color,
0, 
G_TX_RENDERTILE, 
G_IM_FMT_RGBA, G_IM_SIZ_16b,
32, 32,
0, 0, 31, 31,
0,
G_TX_NOMIRROR, G_TX_NOMIRROR,
G_TX_NOMASK, G_TX_NOMASK,
G_TX_NOLOD, G_TX_NOLOD),

gsDPLoadMultiTile_4b(alpha,
256, 
G_TX_RENDERTILE+1, 
G_IM_FMT_I,
32, 32,
0, 0, 31, 31,
0,
G_TX_NOMIRROR, G_TX_NOMIRROR,
G_TX_NOMASK, G_TX_NOMASK,
G_TX_NOLOD, G_TX_NOLOD),
gsDPTextureRectangle(glistp++,
50<<2, 50<<2, 82<<2, 82<<2,
G_TX_RENDERTILE,
0, 0,
1<<10, 1<<10);



