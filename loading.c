#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "loading.h"

void initloading(loadingscreen *l)
{
l->loading[0]=IMG_Load("loading1.png");
l->loading[1]=IMG_Load("loading2.png");
l->loading[2]=IMG_Load("loading3.png");
l->loading[3]=IMG_Load("loading4.png");
l->loading[4]=IMG_Load("loading5.png");
l->loading[5]=IMG_Load("loading6.png");
}
void initloading2(loadingscreen *l)
{
l->loading[0]=IMG_Load("loading1.png");
l->loading[1]=IMG_Load("loading2.png");
l->loading[2]=IMG_Load("loading3.png");
l->loading[3]=IMG_Load("loading4.png");
l->loading[4]=IMG_Load("loading5.png");
l->loading[5]=IMG_Load("loading6.png");
l->backpos.x=800;
l->backpos.y=0;
}

void affichezloading(loadingscreen *l,SDL_Surface* screen)
{
int i; 	
for(i=0;i<6;i++)
{
SDL_Delay(50);	
SDL_BlitSurface(l->loading[i],NULL,screen,NULL);
SDL_Flip(screen);
}
}

