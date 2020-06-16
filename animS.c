#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

int main (int argc, char **argv)
{
    SDL_Surface *ecran = NULL;
    SDL_Surface *perso[3] = {NULL};
    SDL_Event event;
    SDL_Rect positionperso;
    int i = 0, continuer = 1;
    SDL_Init(SDL_INIT_VIDEO);
    ecran = SDL_SetVideoMode(900, 700, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    SDL_WM_SetCaption("Animation", NULL);
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
    perso[0] = IMG_Load("perso0.png");
    perso[1] = IMG_Load("perso1.png");
    perso[2] = IMG_Load("perso2.png");

    SDL_SetColorKey(perso[i], SDL_SRCCOLORKEY, SDL_MapRGB(perso[i]->format, 32, 156, 0));
    positionperso.x = 400;
    positionperso.y = 200;
    SDL_BlitSurface(perso, NULL, ecran, &positionperso);
    SDL_EnableKeyRepeat(-100,-100);
while(continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
            continuer = 0;
            break;
             case SDL_MOUSEBUTTONDOWN:


               if(event.button.button==SDL_BUTTON_LEFT)
{

               if(i >= 2)

               i = 0;
               positionperso.x -= 20;
               //positionperso.x=event.button.x;
               //positionperso.y=event.button.y;
               i++;
}






if(event.button.button==SDL_BUTTON_RIGHT)
{
               if(i >= 2)

               i = 0;
               positionperso.x += 20;
               //positionperso.x= event.button.x;
               //positionperso.y= event.button.y;
               i++;

}
break;



              
}

        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
        SDL_SetColorKey(perso[i], SDL_SRCCOLORKEY, SDL_MapRGB(perso[i]->format, 32, 156, 0));
        SDL_BlitSurface(perso[i], NULL, ecran, &positionperso);
        SDL_Flip(ecran);
    
}


    for(i = 0; i < 2; i++)
    SDL_FreeSurface(perso[i]);
    SDL_Quit();

    return EXIT_SUCCESS;
}

