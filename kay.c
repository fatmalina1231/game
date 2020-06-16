#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "menu.h"
#include "kay.h"

#include "header.h"


void initkay(Kay *kay)//fct fatma
{
        kay->poskay.x=20;
        kay->poskay.y=500;
        kay->posrkay=kay->poskay;

        kay->imgkayd20[0]=IMG_Load("idle11.png");
    kay->imgkayd20[1]=IMG_Load("idle22.png");
    kay->imgkayd20[2]=IMG_Load("idle33.png");

    kay->imgkayd0[0]=IMG_Load("idle1.png");
    kay->imgkayd0[1]=IMG_Load("idle2.png");
    kay->imgkayd0[2]=IMG_Load("idle3.png");

    kay->imgkayd1[0]=IMG_Load("walk1.png");
    kay->imgkayd1[1]=IMG_Load("walk2.png");
    kay->imgkayd1[2]=IMG_Load("walk3.png");
    kay->imgkayd1[3]=IMG_Load("walk4.png");
    kay->imgkayd2[4]=IMG_Load("walk55.png");
    kay->imgkayd2[5]=IMG_Load("walk66.png");
    kay->imgkayd2[6]=IMG_Load("walk77.png");
    kay->imgkayd2[7]=IMG_Load("walk88.png");


void initkay2(kay *kay)
{
kay->imgkayd20[0]=IMG_Load("idle11.png");
    kay->imgkayd20[1]=IMG_Load("idle22.png");
    kay->imgkayd20[2]=IMG_Load("idle33.png");

    kay->imgkayd0[0]=IMG_Load("idle1.png");
    kay->imgkayd0[1]=IMG_Load("idle2.png");
    kay->imgkayd0[2]=IMG_Load("idle3.png");

    kay->imgkayd1[0]=IMG_Load("walk1.png");
    kay->imgkayd1[1]=IMG_Load("walk2.png");
    kay->imgkayd1[2]=IMG_Load("walk3.png");
    kay->imgkayd1[3]=IMG_Load("walk4.png");
    kay->imgkayd2[4]=IMG_Load("walk55.png");
    kay->imgkayd2[5]=IMG_Load("walk66.png");
    kay->imgkayd2[6]=IMG_Load("walk77.png");
    kay->imgkayd2[7]=IMG_Load("walk88.png")
kay->poskay.x=800;
 kay->poskay.y=500;

}


int inputperso(kay *kay,int i,int *jump,int *pause,int *attaquee)
{

SDL_Event e;
SDL_PollEvent(&e);
switch(e.type)
{
case SDL_KEYDOWN :
switch(e.key.keysym.sym)
{
case SDLK_RIGHT :
i++;
;
kay>kaypos.x=p->poskay.x+20;
break;
case SDLK_LEFT :
i++;
kay->kaypos.x=kay->poskay.x-20;
break;
case SDLK_UP:
*jump=1;
break;
case SDLK_ESCAPE :
*pause=1;
break;
case SDLK_DOWN:
*jump=2;
break;
case SDLK_a:
*attaquee=1;
return 7;
break;
}
if(i>=7)
{
i=1;
}





int inputperso2(kay *kay,int i,int *jump,int *pause,int *attaquee)
{
SDL_Event e;
SDL_PollEvent(&e);
int hauteur=30;
int jumping=0;
int playerjump=0;
switch(e.type)
{
case SDL_KEYDOWN :
switch(e.key.keysym.sym)
{case SDLK_m :
i++;
kay->poskay.x=kay->poskay.x+20;
break;
case SDLK_k :
i++;
kay->kaypos.x=kay->poskay.x-20;
break;
case SDLK_o:
*jump=1;
break;
case SDLK_ESCAPE :
*pause=1;
break;
case SDLK_l:
*jump=2;
;
break;
case SDLK_u:
*attaquee=1;
return 7;
break;
}
if(i>=7)
{
i=1;
}

void afficheKay(kay *kay, SDL_Surface *screen)
{
    apply_surface(kay.posX, kay.posY, kay.poskay, screen, NULL);
}

{
SDL_BlitSurface(kay->imgkay1[i]screen, NULL,&kay->poskay.x);
}
void monterdujump(kay *kay,SDL_Surface* screen)
SDL_BlitSurface(kay->imgkayd20[0],NULL,screen,&kay->poskay);
}
void decentedujump(kay *kay , SDL_Surface* screen,int i)
{
if(i!=4)
{
SDL_BlitSurface(kay->imgkayd20[1],NULL,screen,&kay->poskay);

}
else
{
SDL_BlitSurface(kay->imgkayd20[2],NULL,screen,&kay->poskay);
}

}
