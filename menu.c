#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>

void posbutton(SDL_Rect *fond,SDL_Rect *posnewgame0,SDL_Rect *poscontinue0,SDL_Rect *posquit0,SDL_Rect *posnewgame1,SDL_Rect *poscontinue1,SDL_Rect *posquit1)
{
    fond->x= 0;
    fond->y= 0;
    posnewgame0->x =170; //380;
    posnewgame0->y =30; //205;
    poscontinue0->x = 170;//527;
    poscontinue0->y = 150;//205;
    posquit0->x = 170;//467;
    posquit0->y = 250;
    posnewgame1->x =170; //370;
    posnewgame1->y =30;//205;
    poscontinue1->x = 170;
    poscontinue1->y = 150;
    posquit1->x = 170;
    posquit1->y = 250;
}

void init(SDL_Surface* screen ,SDL_Surface *imageDeFond,SDL_Surface* new_game,SDL_Surface *contin,SDL_Surface *quit,SDL_Surface* new_game1,SDL_Surface *contin1,SDL_Surface* quit1,int *continuer)
{
screen=NULL;
imageDeFond=NULL;
new_game=NULL;
contin=NULL;
quit=NULL;
new_game1=NULL;
contin1=NULL;
quit1=NULL;
*continuer=1;
}
void changenewgame(SDL_Surface *screen,SDL_Surface *imageDeFond,SDL_Surface *new_game,SDL_Surface *contin,SDL_Surface *quit,SDL_Rect *positionnew_game,SDL_Rect *positionnew_game1,SDL_Rect* positioncontin0,SDL_Rect *positioncontin,SDL_Rect *positionquit,SDL_Rect *positionquit0,SDL_Rect *positionFond)
{

    new_game=IMG_Load ("new game2.png");
    contin=IMG_Load ("continue.png");
    quit=IMG_Load ("quit.png");
    *positionnew_game=*positionnew_game1;
    *positioncontin=*positioncontin0;
    *positionquit=*positionquit0;
    SDL_BlitSurface(new_game, NULL, screen,positionnew_game);
    SDL_BlitSurface(contin, NULL, screen,positioncontin);
    SDL_BlitSurface(quit, NULL, screen,positionquit);
}

void changeoption(SDL_Surface* screen,SDL_Surface *imageDeFond,SDL_Surface* new_game,SDL_Surface* contin,SDL_Surface* quit,SDL_Rect *positionnew_game,SDL_Rect *positionnew_game0,SDL_Rect* positioncontin1,SDL_Rect *positioncontin,SDL_Rect *positionquit,SDL_Rect *positionquit0,SDL_Rect *positionFond)
{
contin=IMG_Load ("continue2.png");
positioncontin=positioncontin1;
new_game=IMG_Load ("new game.png");
quit = IMG_Load ("quit.png");
positionnew_game = positionnew_game0;
positionquit=positionquit0;
}



int menu()
{
SDL_Surface *ecran,*imageDeFond,*new_game,*contin,*quit,*new_game1,*contin1,*quit1 ;
SDL_Surface* screen;

SDL_Rect positionFond,positionnew_game0,positioncontin0,positioncredits0,positionhelp0,positionquit0,positionnew_game1,positioncontin1,positioncredits1,positionhelp1,positionquit1,positionnew_game,positioncontin,positioncredits,positionhelp,positionquit;
 SDL_Event event ;
    int continuer;
imageDeFond = IMG_Load("image_de_fond.png");
posbutton(&positionFond,&positionnew_game0,&positioncontin0,&positionquit0,&positionnew_game1,&positioncontin1,&positionquit1);
init(screen,imageDeFond,new_game,contin,quit,new_game1,contin1,quit1,&continuer);
    SDL_Init(SDL_INIT_VIDEO);
    screen=SDL_SetVideoMode(640,480,32,SDL_HWSURFACE);
    Mix_OpenAudio(22050,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024);
changenewgame(screen,imageDeFond,new_game,contin,quit,&positionnew_game,&positionnew_game1,&positioncontin0,&positioncontin,&positionquit,&positionquit0,&positionFond);

     Mix_Music *music; 
     music = Mix_LoadMUS("test.mp3"); 
     Mix_PlayMusic(music,-1);
        Mix_Chunk *bip = NULL; 
        Mix_FreeChunk( bip );
        bip = Mix_LoadWAV( "s.wav" );
SDL_BlitSurface(imageDeFond, NULL, screen,&positionFond);
SDL_Flip(screen);
   
 int a=1;

   


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
                                        return 99;   //ca quitte x) 

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
changeoption(screen,imageDeFond,new_game,contin,quit,&positionnew_game,&positionnew_game0,&positioncontin1,&positioncontin,&positionquit,&positionquit0,&positionFond);
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
    					SDL_BlitSurface(quit, NULL, screen, &positionquit);
					SDL_Flip(screen);
		
	}


SDL_FreeSurface(imageDeFond);
Mix_FreeMusic(music);
 Mix_CloseAudio();

}


int main()
{

int r;
r=menu();

}
