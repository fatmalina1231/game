#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>

int menu()
{
SDL_Surface *ecran = NULL, *imageDeFond = NULL, *new_game = NULL, *contin= NULL , *credits=NULL , *help=NULL , *quit=NULL, *new_game1 = NULL, *contin1= NULL , *credits1=NULL , *help1=NULL , *quit1=NULL ;
SDL_Surface* screen;
    SDL_Rect positionFond,positionnew_game0,positioncontin0,positioncredits0,positionhelp0,positionquit0,positionnew_game1,positioncontin1,positioncredits1,positionhelp1,positionquit1,positionnew_game,positioncontin,positioncredits,positionhelp,positionquit;
    SDL_Event event ;
    int continuer=1;

    positionFond.x = 0;
    positionFond.y = 0;
    positionnew_game0.x =170; //380;
    positionnew_game0.y =30; //205;
    positioncontin0.x = 170;//527;
    positioncontin0.y = 150;//205;
    positioncredits0.x = 446;
    positioncredits0.y = 118;
    positionhelp0.x = 555;
    positionhelp0.y = 105;
    positionquit0.x = 170;//467;
    positionquit0.y = 250;
    positionnew_game1.x =170; //370;
    positionnew_game1.y =30;//205;
    positioncontin1.x = 170;//527;
    positioncontin1.y = 150;//205;
    positioncredits1.x = 446;
    positioncredits1.y = 118;
    positionhelp1.x = 555;
    positionhelp1.y = 105;
    positionquit1.x = 170;
    positionquit1.y = 250;
    SDL_Init(SDL_INIT_VIDEO);
screen=SDL_SetVideoMode(640,480,32,SDL_HWSURFACE);
     Mix_OpenAudio(22050,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024);
    imageDeFond = IMG_Load("image_de_fond.png");
    new_game = IMG_Load ("new game2.png");
    contin = IMG_Load ("continue.png");
    quit = IMG_Load ("quit.png");
    positionnew_game = positionnew_game1;
    positioncontin=positioncontin0;
    positioncredits=positioncredits0;
    positionhelp=positionhelp0;
    positionquit=positionquit0;
    SDL_BlitSurface(imageDeFond, NULL, screen, &positionFond);
    SDL_BlitSurface(new_game, NULL, screen, &positionnew_game);
    SDL_BlitSurface(contin, NULL, screen, &positioncontin);
    SDL_BlitSurface(credits, NULL, screen, &positioncredits);
    SDL_BlitSurface(help, NULL, screen, &positionhelp);
    SDL_BlitSurface(quit, NULL, screen, &positionquit);
     Mix_Music *music; 
     music = Mix_LoadMUS("test.mp3"); 
     Mix_PlayMusic(music,-1);
        Mix_Chunk *bip = NULL; 
        Mix_FreeChunk( bip );
        bip = Mix_LoadWAV( "s.wav" );
   
 int a=1;

    SDL_Flip(screen);


    while (continuer)
	{
    		SDL_WaitEvent(&event);
    		switch (event.type)
    		{
     			case SDL_QUIT: 
     			continuer=0;
     

     			case SDL_KEYDOWN:

      			switch (event.key.keysym.sym)
       			{
          			case SDLK_ESCAPE: 
          			return 9;
                                 break;

                                 case SDLK_x :
                                Mix_PauseMusic();
                                 break;                             


				case SDLK_RETURN:
				{
						
					if (a==5)
                                        return 9;   //ca quitte x) 

                                	else if (a==1)
                                		return 7; // tod5ol lel game ez x)
					else if (a==2)
						return 8;
				}
break;
          		
				case SDLK_UP:
					if (a==5)
					{
						new_game=IMG_Load ("new game2.png");
    						contin = IMG_Load ("continue.png");
    						quit = IMG_Load ("quit.png");
						positionnew_game = positionnew_game1;
						positioncontin=positioncontin0;
						positionquit=positionquit0;

						a=1;break;
                                                Mix_PlayChannel( -1, bip, 0 );
						
					}
               				if(a==1)
                                        {
						new_game=IMG_Load ("new game.png");
    						contin = IMG_Load ("continue.png");

    						quit = IMG_Load ("quit2.png");
						positionnew_game = positionnew_game0;
						positioncontin=positioncontin0;
						positioncredits=positioncredits0;
						positionhelp=positionhelp0;
						positionquit=positionquit1;
                                         a=5;
					break;
   Mix_PlayChannel( -1, bip, 0 );

                                           
                                        }

					


					else if (a==3)
					{
						quit=IMG_Load("quit2.png");
						new_game=IMG_Load ("new game.png");
    						contin = IMG_Load ("continue.png");
						positionnew_game = positionnew_game0;
						positioncontin=positioncontin0;
						positionhelp=positionhelp0;
						positionquit=positionquit1;
						positioncredits=positioncredits0;
                                                 Mix_PlayChannel( -1, bip, 0 );
						a=5;break;
						
					}
			
					case SDLK_DOWN:
					if (a==1)
					{
						contin=IMG_Load ("continue2.png");
						positioncontin=positioncontin0;
						new_game=IMG_Load ("new game.png");
    						quit = IMG_Load ("quit.png");
						positionnew_game = positionnew_game0;
						positioncredits=positioncredits;
						positionhelp=positionhelp0;
						positionquit=positionquit1;
                                                Mix_PlayChannel( -1, bip, 0 );
						a=3;break;
					}
				
					else if (a==3)
					{
						contin=IMG_Load ("continue.png");
						positioncontin=positioncontin0;
						new_game=IMG_Load ("new game.png");
    						quit = IMG_Load ("quit2.png");
						positionnew_game = positionnew_game1;
						positioncredits=positioncredits0;
						positionhelp=positionhelp0;
						positionquit=positionquit0;
                                                Mix_PlayChannel( -1, bip, 0 );
						a=4;break;
					
						}
						else if (a==4)
					{
						contin=IMG_Load ("continue.png");
						positioncontin=positioncontin0;
						new_game=IMG_Load ("new game2.png");
    						quit = IMG_Load ("quit.png");
						positionnew_game = positionnew_game1;
						positioncredits=positioncredits0;
						positionhelp=positionhelp0;
						positionquit=positionquit0;
                                                Mix_PlayChannel( -1, bip, 0 );
						a=1;break;
					
					}
			
					
}
					
			

		
		}
					SDL_BlitSurface(imageDeFond, NULL, screen, &positionFond);
    					SDL_BlitSurface(new_game, NULL, screen, &positionnew_game);
    					SDL_BlitSurface(contin, NULL, screen, &positioncontin);
    					SDL_BlitSurface(credits, NULL, screen, &positioncredits);
    					SDL_BlitSurface(help, NULL, screen, &positionhelp);
    					SDL_BlitSurface(quit, NULL, screen, &positionquit);
					SDL_Flip(screen);
		
	}


SDL_FreeSurface(imageDeFond);
Mix_FreeMusic(music);
 Mix_CloseAudio();

}



int main (int argc, char **argv)
{
int t;
int occ=0;
t=menu();
if(t==7)
{
    SDL_Surface *ecran = NULL;
    SDL_Surface *perso[7] = {NULL};
    SDL_Event event;
SDL_Surface* map;
    SDL_Rect positionperso;
    int i = 0, continuer = 1;
    SDL_Init(SDL_INIT_VIDEO);
    ecran = SDL_SetVideoMode(900, 700, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    SDL_WM_SetCaption("Animation", NULL);
perso[0] = IMG_Load("s1.png");
perso[1] = IMG_Load("s2.png");
perso[2] = IMG_Load("s3.png");
perso[3] = IMG_Load("s4.png");
perso[4] = IMG_Load("s5.png");
perso[5] = IMG_Load("s6.png");
perso[6] = IMG_Load("s7.png");
map=IMG_Load("map.png");

 
    positionperso.x = 0;
    positionperso.y = 500;
    SDL_BlitSurface(perso[i], NULL, ecran, &positionperso);
    SDL_EnableKeyRepeat(100,100);
    while(continuer)
    {
	
        SDL_WaitEvent(&event);
        switch(event.type)
        {

            case SDL_QUIT:
            continuer = 0;
            break;
            case SDL_KEYDOWN:
            switch(event.key.keysym.sym)
            {
                case SDLK_LEFT:
                if(i >= 6)
                i = 0;
                positionperso.x -= 20;
                i++; 
                break;

                case SDLK_RIGHT:
                if(i >= 6)
                i = 0;
                positionperso.x += 20;
                i++;
                break;
                  
                case SDLK_DOWN:
                if(i >= 6)
                i = 0;
                positionperso.y += 20;
                i++;
                break;
             
                case SDLK_UP:
                
                i = 0;

                positionperso.y=positionperso.y-100;

                occ=1; 
                 
                

                break;
case SDLK_a :
i=0;
positionperso.x += 100;
positionperso.y=positionperso.y-100;
occ=1;
break; 
                
}

printf("La position en x est %d \n",positionperso.x);
printf("La position en y est %d \n",positionperso.y);


if(positionperso.y>500)
{
positionperso.y=500;
}

if(positionperso.x==800)
{
SDL_FreeSurface(map);
SDL_Delay(100);
map=IMG_Load("sky1.png");
positionperso.x=0;
positionperso.y=500;
}


        SDL_BlitSurface(map,NULL,ecran,NULL);  
        SDL_BlitSurface(perso[i], NULL, ecran, &positionperso);

        SDL_Flip(ecran);

SDL_Delay(100); 
SDL_BlitSurface(map,NULL,ecran,NULL); 
SDL_BlitSurface(perso[i], NULL, ecran, &positionperso);
        SDL_Flip(ecran);

if(occ==1)
{
if(positionperso.x!=280 || positionperso.y!=400)
{
positionperso.y+=100;
SDL_BlitSurface(map,NULL,ecran,NULL);  
SDL_BlitSurface(perso[i], NULL, ecran, &positionperso);

        SDL_Flip(ecran);

SDL_Delay(100); 
SDL_BlitSurface(map,NULL,ecran,NULL); 
SDL_BlitSurface(perso[i], NULL, ecran, &positionperso);
 
       SDL_Flip(ecran);
}

if(positionperso.x==280 && positionperso.y==400)
{
positionperso.x=280;
positionperso.y=400;
  SDL_BlitSurface(map,NULL,ecran,NULL);  
        SDL_BlitSurface(perso[i], NULL, ecran, &positionperso);

        SDL_Flip(ecran);

SDL_Delay(100); 
SDL_BlitSurface(map,NULL,ecran,NULL); 
SDL_BlitSurface(perso[i], NULL, ecran, &positionperso);
 
       SDL_Flip(ecran);
} 
occ=0;
}
 


       
}
}


    for(i = 0; i < 7; i++)
    SDL_FreeSurface(perso[i]);
    SDL_Quit();

    return EXIT_SUCCESS;
}
else if (t!=7)
{
return EXIT_SUCCESS;
}
}

