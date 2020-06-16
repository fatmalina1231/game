prog: main.o menu1.o personnage.o background.o jump.o portal.o loading.o fireball.o  score.o temp.o zombie.o pause.o vie.o collision.o enigme.o attaque.o
	gcc  main.o menu1.o personnage.o background.o portal.o jump.o loading.o fireball.o temp.o score.o zombie.o pause.o vie.o collision.o enigme.o attaque.o -o prog -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g

main.o:main.c menu.h personnage.h background.h jump.h loading.h fireball.h score.h zombie.h pause.h vie.h collision.h enigme.h attaque.h
	gcc -c main.c  menu.h personnage.h jump.h loading.h fireball.h score.h zombie.h pause.h vie.h collision.h enigme.h attaque.h -g
Gamer.o:menu1.c menu.h  personnage.h background.h
	gcc -c menu1.c menu.h personnage.h background.h  -g
perso:personnage.c menu.h personnage.h background.h
	gcc -c personnage.c menu.h personnage.h background.h
background:background.c menu.h personnage.h background.h
	gcc -c background.c menu.h personnage.h background.h
jump:jump.c menu.h personnage.h background.h jump.h
	gcc -c jump.c menu.h personnage.h background.h jump.h
portal:portal.c portal.h
	gcc -c portal.c portal.h
loadingscreen:loading.c loading.h
	gcc -c loading.c loading.h
fireball:fireball.c fireball.h
	gcc -c fireball.c fireball.h
star:score.c score.h
	gcc -c score.c score.h
zombie:zombie.c zombie.h
	gcc -c zombie.c zombie.h
pause: pause.c pause.h
	gcc -c pause.c pause.h
vie: vie.c vie.h
	gcc -c vie.c vie.h
collision :collision.c collision.h
	gcc -c collision.c collision.h
enigme: enigme.c enigme.h
	gcc -c enigme.c enigme.h
attaque:attaque.c attaque.h
	gcc -c attaque.c attaque.h
temp:temp.c temp.h
	gcc -c temp.c temp.h
