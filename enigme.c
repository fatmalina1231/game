#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>
#include "enigme.h"

int enigme4(SDL_Surface* ecran)
{


    char *phrase, *mot;
    char correctanswer[18][20]= {{"stamped"},{"15"},{"Okkkk"}};//18 taille ecriture 20 num case
    printf("%s\n",correctanswer[1]);
    phrase=calloc(20,sizeof(char));
    mot=calloc(6,sizeof(char));
    int continuer = 1,i=0,True=0,enigmeDone=1,j=0,done=0;
    SDL_Event event;
    SDL_Init(SDL_INIT_VIDEO); 
    SDL_Surface *background = NULL,*quiz1=NULL,*quiz2=NULL,*quiz3=NULL,*quiz4=NULL,*curseur=NULL,*zoneSaisie=NULL,*win=NULL;
    TTF_Font *police = NULL;



    SDL_Color couleurbleu = {0,0,53};
    TTF_Init();
    police = TTF_OpenFont("font/font.ttf", 22);
    ecran=SDL_SetVideoMode(450, 650, 32, SDL_HWSURFACE); 
    SDL_Rect posbg,posquiz,poscurseur,poszoneSaisie,poswin;
    SDL_WM_SetCaption("Enigme", NULL); 
    if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1){printf("%s",Mix_GetError()); }
    Mix_Chunk *correct,*wrong,*soundwin; 
    correct = Mix_LoadWAV("sound/correct.wav");
    wrong = Mix_LoadWAV("sound/wrong.wav");
    soundwin= Mix_LoadWAV("sound/win.wav");
    //////////////////////////////////
    background=IMG_Load("img/bg.png");
    quiz1=IMG_Load("img/quiz1.png");
    quiz2=IMG_Load("img/quiz2.png");
    quiz3=IMG_Load("img/quiz3.png");
    quiz4=IMG_Load("img/quiz4.png");
    curseur=IMG_Load("img/curseur.png");
    win=IMG_Load("img/win.png");
    posquiz.x=0;  
    posquiz.y=0;  
    poscurseur.x=0;
    poscurseur.y=0;
    poszoneSaisie.x=135;
    poszoneSaisie.y=440;
    poswin.x=135;
    poswin.y=240;
    //////////////////////////////////
    //SDL_BlitSurface(background,NULL,ecran,&posbg);
    //SDL_BlitSurface(quiz1,NULL,ecran,&posquiz1);
    SDL_Flip(ecran);//refresh ecran
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
        case SDL_QUIT:
            continuer = 0;
            break;
        case SDL_KEYDOWN:
            switch(event.key.keysym.sym)// win teta9ra l click
            {
            case SDLK_RETURN:
            /////////Verif_Enigme1//////////
            if(enigmeDone==1)//verificatio enigme juste
            { if(poscurseur.y==0){Mix_PlayChannel(1,correct,0);printf("win Enigme 1 \n");enigmeDone=2;done=0;} // if s7i7a done ==2
              else{Mix_PlayChannel(1,wrong,0);printf("False Enigme 1\n");}
            }
            //////////Verif_Enigme2//////////
            if(enigmeDone==2&&done==2)
            { if(poscurseur.y==50){Mix_PlayChannel(1,correct,0);printf("win Enigme 2 \n");enigmeDone=3;done=0;} 
              else{Mix_PlayChannel(1,wrong,0);printf("False Enigme 2\n");}
            }
            //////////Verif_Enigme3//////////
            if(enigmeDone==3&&done==3)
            {   done=0; 
                if(strcmp(phrase,correctanswer[0])==0)
                {Mix_PlayChannel(1,correct,0);printf("win Enigme 3\n");enigmeDone=4;
                 memset(phrase,0,sizeof(char));phrase=calloc(20,sizeof(char));done=0;}//if rep false supprimer l espace reservé
              else{Mix_PlayChannel(1,wrong,0);memset(phrase,0,sizeof(char));phrase=calloc(20,sizeof(char));printf("False Enigme 3\n");}
            }
            //////////Verif_Enigme4//////////
            if(enigmeDone==4&&done==4)
            {   
                if(strcmp(phrase,correctanswer[1])==0)
                {Mix_PlayChannel(1,correct,0);printf("win Enigme 4 \n");enigmeDone=5;}
              else{Mix_PlayChannel(1,wrong,0);memset(phrase,0,sizeof(char));phrase=calloc(20,sizeof(char));printf("False Enigme 3\n");}
            }
            break;
             //////////FIN_Case_RETURN//////////
             case SDLK_UP: 
             if(enigmeDone!=3 && enigmeDone!=4 && enigmeDone!=5)
             {
             i--;
             if(i<=0){i=3;}
             if(i==4){i=1;}
             if(i==1){poscurseur.y=0; SDL_BlitSurface(curseur,NULL,ecran,&poscurseur); SDL_Flip(ecran); SDL_Delay(900);} //affichage de fleche

             if(i==2){poscurseur.y=50; SDL_BlitSurface(curseur,NULL,ecran,&poscurseur); SDL_Flip(ecran); SDL_Delay(900);} 
             if(i==3){poscurseur.y=105; SDL_BlitSurface(curseur,NULL,ecran,&poscurseur); SDL_Flip(ecran); SDL_Delay(900);}
             }
             break;
             //////////FIN_Case_UP//////////
             case SDLK_DOWN:
             if(enigmeDone!=3 && enigmeDone!=4 && enigmeDone!=5)
             {
             i++;
             if(i==4){i=1;}
             if(i==1){poscurseur.y=0; SDL_BlitSurface(curseur,NULL,ecran,&poscurseur); SDL_Flip(ecran); SDL_Delay(900);}
             if(i==2){poscurseur.y=50; SDL_BlitSurface(curseur,NULL,ecran,&poscurseur); SDL_Flip(ecran); SDL_Delay(900);}
             if(i==3){poscurseur.y=105; SDL_BlitSurface(curseur,NULL,ecran,&poscurseur); SDL_Flip(ecran); SDL_Delay(900);}
             }
             break;
             //////////FIN__DOWN//////////
            case SDLK_BACKSPACE:
                printf("Effacer\n");
                int casee = 0,longeur;
                longeur=strlen(phrase);
                longeur--;
                while(phrase[casee] != '\0')
                {
                    if(casee >=longeur)
                    {
                        phrase[casee] = phrase[casee+1];
                    }
                    casee++;
                }
                break;
            case SDLK_KP0:
                strcpy(mot,"0");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("0\n");}
                break;
            case SDLK_KP1:
                strcpy(mot,"1");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("1\n");}
                break;
            case SDLK_KP2:
                strcpy(mot,"2");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("2\n");}
                break;
            case SDLK_KP3:
                strcpy(mot,"3");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("3\n");}
                break;
            case SDLK_KP4:
                strcpy(mot,"4");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("4\n");}
                break;
            case SDLK_KP5:
                strcpy(mot,"5");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("5\n");}
                break;
            case SDLK_KP6:
                strcpy(mot,"6");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("6\n");}
                break;
            case SDLK_KP7:
                strcpy(mot,"7");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("7\n");}
                break;
            case SDLK_KP8:
                strcpy(mot,"8");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("8\n");}
                break;
            case SDLK_KP9:
                strcpy(mot,"9");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("9\n");}
                break;
                //////////alphabet//////////
            case SDLK_a:
                strcpy(mot,"a");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("a\n");}//concatenation dans phrase
                break;
            case SDLK_b:
                strcpy(mot,"b");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("b\n");}
                break;
            case SDLK_c:
                strcpy(mot,"c");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("c\n");}
                break;
            case SDLK_d:
                strcpy(mot,"d");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("d\n");}
                break;
            case SDLK_e:
                strcpy(mot,"e");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("e\n");}
                break;
            case SDLK_f:
                strcpy(mot,"f");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("f\n");}
                break;
            case SDLK_g:
                strcpy(mot,"g");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("g\n");}
                break;
            case SDLK_h:
                strcpy(mot,"h");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("h\n");}
                break;
            case SDLK_i:
                strcpy(mot,"i");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("i\n");}
                break;
            case SDLK_j:
                strcpy(mot,"j");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("j\n");}
                break;
            case SDLK_k:
                strcpy(mot,"k");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("k\n");}
                break;
            case SDLK_l:
                strcpy(mot,"l");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("l\n");}
                break;
            case SDLK_m:
                strcpy(mot,"m");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("m\n");}
                break;
            case SDLK_n:
                strcpy(mot,"n");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("n\n");}
                break;
            case SDLK_o:
                strcpy(mot,"o");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("o\n");}
                break;
            case SDLK_p:
                strcpy(mot,"p");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("p\n");}
                break;
            case SDLK_q:
                strcpy(mot,"q");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("q\n");}
                break;
            case SDLK_r:
                strcpy(mot,"r");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("r\n");}
                break;
                case SDLK_s:
                strcpy(mot,"s");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("s\n");}
                break;
            case SDLK_t:
                strcpy(mot,"t");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("t\n");}
                break;
            case SDLK_u:
                strcpy(mot,"u");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("u\n");}
                break;
            case SDLK_v:
                strcpy(mot,"v");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("v\n");}
                break;
            case SDLK_w:
                strcpy(mot,"w");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("w\n");}
                break;
            case SDLK_x:
                strcpy(mot,"x");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("x\n");}
                break;
            case SDLK_y:
                strcpy(mot,"y");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("y\n");}
                break;
            case SDLK_z:
                strcpy(mot,"z");
                if(strlen(phrase)<7){strcat(phrase,mot);printf("z\n");}
                break;
         }
     }
            SDL_BlitSurface(background,NULL,ecran,&posquiz); 
            if(enigmeDone==1){done=0;SDL_BlitSurface(quiz1,NULL,ecran,&posquiz);}//affichage enigme 
            if(enigmeDone==2){done=2;SDL_BlitSurface(quiz2,NULL,ecran,&posquiz);}
            if(enigmeDone==3){done=3;SDL_BlitSurface(quiz3,NULL,ecran,&posquiz);
            zoneSaisie=TTF_RenderText_Blended(police,phrase,couleurbleu);//load zone saisie
            SDL_BlitSurface(zoneSaisie,NULL,ecran,&poszoneSaisie);}
            if(enigmeDone==4)
            {done=4;SDL_BlitSurface(quiz4,NULL,ecran,&posquiz);
            zoneSaisie=TTF_RenderText_Blended(police,phrase,couleurbleu);
            SDL_BlitSurface(zoneSaisie,NULL,ecran,&poszoneSaisie);}
            if(enigmeDone==5){Mix_PlayChannel(1,soundwin,0);SDL_BlitSurface(win,NULL,ecran,&poswin);}

            SDL_Flip(ecran);
                        
    }
    TTF_CloseFont(police);
    SDL_Quit(); // Arrêt de la SDL
    SDL_FreeSurface(quiz1);
    SDL_FreeSurface(quiz2);
    SDL_FreeSurface(quiz3);
    SDL_FreeSurface(quiz4);
    SDL_FreeSurface(zoneSaisie);
   
    return EXIT_SUCCESS; 
}




void initenigme(enigme* e)
{
e->room=IMG_Load("enigme-room.png");
e->letter=IMG_Load("enigme-paper.png");
e->box=IMG_Load("enigme-box.png");
e->boxopen=IMG_Load("enigme-solved.png");
e->takekey=IMG_Load("enigmesolveddooropen1");
e->opendoor[0]=IMG_Load("enigmesolveddooropen1.png");
e->opendoor[1]=IMG_Load("enigmesolveddooropen2.png");
e->opendoor[2]=IMG_Load("enigmesolveddooropen3.png");
e->opendoor[3]=IMG_Load("enigmesolveddooropen4.png");
e->roompos.x=0;
e->roompos.y=0;
e->letters[0]=IMG_Load("aletter.png");
e->letters[1]=IMG_Load("bletter.png");
e->letters[2]=IMG_Load("cletter.png");
e->letters[3]=IMG_Load("eletter.png");
e->letters[4]=IMG_Load("fletter.png");
e->letters[5]=IMG_Load("gletter.png");
e->letters[6]=IMG_Load("jletter.png");
e->letters[7]=IMG_Load("tletter.png");


int i;

e->posletters[0].x=270;
e->posletters[0].y=170;
e->posletters[1].x=340;
e->posletters[1].y=170;
e->posletters[2].x=410;
e->posletters[2].y=170;
e->posletters[3].x=480;
e->posletters[3].y=170;
e->posletters[4].x=270;
e->posletters[4].y=240;
e->posletters[5].x=340;
e->posletters[5].y=240;
e->posletters[6].x=410;
e->posletters[6].y=240;
e->posletters[7].x=480;
e->posletters[7].y=240;
e->reponse[0].x=274;
e->reponse[0].y=447;
e->reponse[1].x=380;
e->reponse[1].y=447;
e->reponse[2].x=492;
e->reponse[2].y=447;
e->pos=0;

}
void initenigme2(enigme* e)
{
e->room=IMG_Load("enigme-room.png");
e->letter=IMG_Load("enigme-paper.png");
e->box=IMG_Load("enigme-box.png");
e->boxopen=IMG_Load("enigme-solved.png");
e->takekey=IMG_Load("enigmesolveddooropen1");
e->opendoor[0]=IMG_Load("enigmesolveddooropen1.png");
e->opendoor[1]=IMG_Load("enigmesolveddooropen2.png");
e->opendoor[2]=IMG_Load("enigmesolveddooropen3.png");
e->opendoor[3]=IMG_Load("enigmesolveddooropen4.png");
e->roompos.x=0;
e->roompos.y=0;
e->letters[0]=IMG_Load("aletter.png");
e->letters[1]=IMG_Load("bletter.png");
e->letters[2]=IMG_Load("cletter.png");
e->letters[3]=IMG_Load("eletter.png");
e->letters[4]=IMG_Load("fletter.png");
e->letters[5]=IMG_Load("gletter.png");
e->letters[6]=IMG_Load("jletter.png");
e->letters[7]=IMG_Load("tletter.png");


int i;

e->posletters[0].x=1070;
e->posletters[0].y=970;
e->posletters[1].x=1140;
e->posletters[1].y=1070;
e->posletters[2].x=1210;
e->posletters[2].y=970;
e->posletters[3].x=1280;
e->posletters[3].y=970;
e->posletters[4].x=1070;
e->posletters[4].y=1040;
e->posletters[5].x=1140;
e->posletters[5].y=1040;
e->posletters[6].x=1210;
e->posletters[6].y=1040;
e->posletters[7].x=1280;
e->posletters[7].y=1040;
e->reponse[0].x=1074;
e->reponse[0].y=1247;
e->reponse[1].x=1180;
e->reponse[1].y=1247;
e->reponse[2].x=1292;
e->reponse[2].y=1247;
e->pos=0;

}
void initreponse(enigme *e)
{
e->letters[0]=IMG_Load("aletter.png");
e->letters[1]=IMG_Load("bletter.png");
e->letters[2]=IMG_Load("cletter.png");
e->letters[3]=IMG_Load("eletter.png");
e->letters[4]=IMG_Load("fletter.png");
e->letters[5]=IMG_Load("gletter.png");
e->letters[6]=IMG_Load("jletter.png");
e->letters[7]=IMG_Load("tletter.png");
e->reponse[0].x=0;
e->reponse[0].y=0;
e->reponse[1].x=0;
e->reponse[1].y=0;
}
void affichezroom(enigme *e,SDL_Surface* screen)
{
SDL_BlitSurface(e->room,NULL,screen,&e->roompos);
}
void affichezletter(enigme *e,SDL_Surface* screen)
{
SDL_BlitSurface(e->letter,NULL,screen,&e->roompos);
}

void affichezbox(enigme *e,SDL_Surface* screen)
{
SDL_BlitSurface(e->box,NULL,screen,&e->roompos);	
}
void affichezboxopen(enigme *e,SDL_Surface* screen)
{
SDL_BlitSurface(e->boxopen,NULL,screen,&e->roompos);	
}
void affichezkeytaken(enigme *e,SDL_Surface* screen)
{
SDL_BlitSurface(e->takekey,NULL,screen,&e->roompos);	
}
void affichezdooropen(enigme *e,SDL_Surface *screen,int i)
{
SDL_BlitSurface(e->opendoor[i],NULL,screen,&e->roompos);

}
int inputenigme(enigme *e)
{
SDL_Event event;
int i;
SDL_PollEvent(&event);
switch(event.type)
{

case SDL_MOUSEBUTTONDOWN :
if((event.motion.x<=431 && event.motion.x>=334) && (event.motion.y>=430 && event.motion.y<=523))
i=1;
else if((event.motion.x<=265 && event.motion.x>=87) && (event.motion.y>=346 && event.motion.y<=519))
i=2;
else
i=0;
break;

}
return i;
}

void affichezletters(enigme *e,SDL_Surface* screen)
{
int i;
for(i=0;i<8;i++)
{
SDL_BlitSurface(e->letters[i],NULL,screen,&e->posletters[i]);

}
}

void affichezletters2(enigme *e,SDL_Surface* screen,int i)
{
SDL_BlitSurface(e->letters[i],NULL,screen,&e->reponse[0]);
}
void affichezletters3(enigme *e,SDL_Surface* screen,int i)
{
SDL_BlitSurface(e->letters[i],NULL,screen,&e->reponse[1]);
}
void affichezletters4(enigme *e,SDL_Surface* screen,int i)
{
SDL_BlitSurface(e->letters[i],NULL,screen,&e->reponse[1]);
}
int  inputcoffre(enigme *e,SDL_Surface* screen,int occ,int *quit1,int *eni)
{
SDL_Event event;
//if(occ==3 && )
if(verifenigmetrue(e)==0 && occ==3)
{
*quit1=1;
occ=0;	
}
if(verifenigmetrue(e)==1 && occ==3)
{
*quit1=1;
occ=0;
*eni=3;	
}
SDL_PollEvent(&event);

switch(event.type)
{
case SDL_MOUSEMOTION :
printf("x=%d et y=%d \n ",event.motion.x,event.motion.y);
break;
case SDL_MOUSEBUTTONDOWN:
if((event.motion.x>290&&event.motion.x<315)&&(event.motion.y>165 && event.motion.y<200 ))
{
SDL_BlitSurface(e->letters[0],NULL,screen,&e->reponse[occ]);
SDL_Flip(screen);
e->T[occ]=0;
occ=occ+1;
}
else if((event.motion.x>=350 && event.motion.x<=380)&&(event.motion.y>165 && event.motion.y<200 ) )
{
SDL_BlitSurface(e->letters[1],NULL,screen,&e->reponse[occ]);
SDL_Flip(screen);
e->T[occ]=1;
occ=occ+1;	
}
else if((event.motion.x>=418 && event.motion.x<=455)&&(event.motion.y>165 && event.motion.y<200 ))
{
SDL_BlitSurface(e->letters[2],NULL,screen,&e->reponse[occ]);
SDL_Flip(screen);
e->T[occ]=2;
occ=occ+1;		
}
else if((event.motion.x>=490 && event.motion.x<=530)&&(event.motion.y>165 && event.motion.y<200 ))
{
SDL_BlitSurface(e->letters[3],NULL,screen,&e->reponse[occ]);
SDL_Flip(screen);
e->T[occ]=3;
occ=occ+1;		
}	
else if((event.motion.x>=290 && event.motion.x<=315)&&(event.motion.y>240 && event.motion.y<270 ))
{
SDL_BlitSurface(e->letters[4],NULL,screen,&e->reponse[occ]);
SDL_Flip(screen);
e->T[occ]=4;
occ=occ+1;      
}   
else if((event.motion.x>=350 && event.motion.x<=380)&&(event.motion.y>240 && event.motion.y<270 ))
{
SDL_BlitSurface(e->letters[5],NULL,screen,&e->reponse[occ]);
SDL_Flip(screen);
e->T[occ]=5;
occ=occ+1;      
}   
else if((event.motion.x>=418 && event.motion.x<=455)&&(event.motion.y>240 && event.motion.y<270 ))
{
SDL_BlitSurface(e->letters[6],NULL,screen,&e->reponse[occ]);
SDL_Flip(screen);
e->T[occ]=6;
occ=occ+1;      
}   

else if((event.motion.x>=490 && event.motion.x<=530)&&(event.motion.y>240 && event.motion.y<270 ))
{
SDL_BlitSurface(e->letters[7],NULL,screen,&e->reponse[occ]);
SDL_Flip(screen);
e->T[occ]=7;
occ=occ+1;      
}   
break;

}
return occ;
}

int verifenigmetrue(enigme* e)
{
if(e->T[0]==0)
{
if(e->T[1]==5)
{
if(e->T[2]==3)
{
return 1;	
}	
}
}
return 0;
}

int inputenigme2(enigme *e)
{
SDL_Event event;
int i;
int j;
SDL_PollEvent(&event);
switch(event.type)
{
case SDL_MOUSEMOTION:
printf("%d %d \n",event.motion.x,event.motion.y);
break;	
case SDL_MOUSEBUTTONDOWN :
if((event.motion.x<=270 && event.motion.x>=200) && (event.motion.y>=416 && event.motion.y<=437))
return 1;
else
return 3;
break;
}

}

	