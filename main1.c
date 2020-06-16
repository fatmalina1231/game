#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_ttf.h>

int main (void)
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL, *new_game = NULL, *contin= NULL , *credits=NULL , *help=NULL , *quit=NULL, *new_game1 = NULL, *contin1= NULL , *credits1=NULL , *help1=NULL , *quit1=NULL ;
SDL_Surface* screen;
    SDL_Rect positionFond,positionnew_game0,positioncontin0,positioncredits0,positionhelp0,positionquit0,positionnew_game1,positioncontin1,positioncredits1,positionhelp1,positionquit1,positionnew_game,positioncontin,positioncredits,positionhelp,positionquit;
    SDL_Event event ;
    int continuer=1;

    positionFond.x = 0;
    positionFond.y = 0;
    positionnew_game0.x =0; //380;
    positionnew_game0.y =0; //205;
    positioncontin0.x = 320;//527;
    positioncontin0.y = 0;//205;
    positioncredits0.x = 446;
    positioncredits0.y = 118;
    positionhelp0.x = 555;
    positionhelp0.y = 105;
    positionquit0.x = 20;//467;
    positionquit0.y = 80;
    positionnew_game1.x =0; //370;
    positionnew_game1.y =0;//205;
    positioncontin1.x = 320;//527;
    positioncontin1.y = 0;//205;
    positioncredits1.x = 446;
    positioncredits1.y = 118;
    positionhelp1.x = 555;
    positionhelp1.y = 105;
    positionquit1.x = 20;
    positionquit1.y = 80;
    SDL_Init(SDL_INIT_VIDEO);
screen=SDL_SetVideoMode(680,680,32,SDL_HWSURFACE);
     Mix_OpenAudio(22050,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024);
    imageDeFond = IMG_Load("image_de_fond.png");
    new_game = IMG_Load ("new game2.png");
    contin = IMG_Load ("continue.png");
    //credits = IMG_Load ("credits.png");
    //help = IMG_Load ("help.png");
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
          			return 99;



				case SDLK_RETURN:
				{
						
					if (a==5)
                                        return 99;   //ca quitte x) 

                                	else if (a==1)
                                		return 7; // tod5ol lel game ez x)
					else if (a==2)
						return 8;
				}
          		
				case SDLK_UP:
					if (a==5)
					{
						new_game=IMG_Load ("new game2.png");
    						contin = IMG_Load ("continue.png");
    						quit = IMG_Load ("quit.png");
						positionnew_game = positionnew_game1;
						positioncontin=positioncontin0;
						positioncredits=positioncredits0;
						positionhelp=positionhelp0;
						positionquit=positionquit0;

						a=1;break;
                                                  if( Mix_PlayChannel( -1, bip, 0 ) == -1 ) { return 1; }
						
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
if( Mix_PlayChannel( -1, bip, 0 ) == -1 ) { return 1; }

                                           
                                        }

					


					else if (a==3)
					{
						quit=IMG_Load("quit2.png");
						new_game=IMG_Load ("new game.png");
    						contin = IMG_Load ("continue.png");
    						//credits = IMG_Load ("credits.png");
    						//help = IMG_Load ("help.png");
						positionnew_game = positionnew_game0;
						positioncontin=positioncontin0;
						positionhelp=positionhelp0;
						positionquit=positionquit1;
						positioncredits=positioncredits0;
                                                  if( Mix_PlayChannel( -1, bip, 0 ) == -1 ) { return 1; }
						a=5;break;
						
					}
			
					case SDLK_DOWN:
					if (a==1)
					{
						contin=IMG_Load ("continue.png");
						positioncontin=positioncontin0;
						new_game=IMG_Load ("new game.png");
    						//credits = IMG_Load ("credits.png");
    						//help = IMG_Load ("help.png");
    						quit = IMG_Load ("quit2.png");
						positionnew_game = positionnew_game0;
						positioncredits=positioncredits;
						positionhelp=positionhelp0;
						positionquit=positionquit1;
                                                if( Mix_PlayChannel( -1, bip, 0 ) == -1 ) { return 1; }
						a=3;break;
					}
				
					else if (a==3)
					{
						contin=IMG_Load ("continue.png");
						positioncontin=positioncontin0;
						new_game=IMG_Load ("new game2.png");
    						//credits = IMG_Load ("credits.png");
    						//help = IMG_Load ("help.png");
    						quit = IMG_Load ("quit.png");
						positionnew_game = positionnew_game1;
						positioncredits=positioncredits0;
						positionhelp=positionhelp0;
						positionquit=positionquit0;
                                                  if( Mix_PlayChannel( -1, bip, 0 ) == -1 ) { return 1; }
						a=1;break;
					
					}
			
					case SDLK_RIGHT:
					if (a==1)
					{
						contin=IMG_Load ("continue2.png");
						positioncontin=positioncontin1;
						new_game=IMG_Load ("new game.png");
    						//credits = IMG_Load ("credits.png");
    						//help = IMG_Load ("help.png");
    						quit = IMG_Load ("quit.png");
						positionnew_game = positionnew_game0;
						positioncredits=positioncredits0;
						positionhelp=positionhelp0;
						positionquit=positionquit0;
                                                    if( Mix_PlayChannel( -1, bip, 0 ) == -1 ) { return 1; }
						a=2;break;
					}
			
					case SDLK_LEFT:
					if (a==2)
					{
						contin=IMG_Load ("continue.png");
						positioncontin=positioncontin0;
						new_game=IMG_Load ("new game2.png");
    						//credits = IMG_Load ("credits.png");
    						//help = IMG_Load ("help.png");
    						quit = IMG_Load ("quit.png");
						positionnew_game = positionnew_game1;
						positioncredits=positioncredits0;
						positionhelp=positionhelp0;
						positionquit=positionquit0;
                                                  if( Mix_PlayChannel( -1, bip, 0 ) == -1 ) { return 1; }
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

























