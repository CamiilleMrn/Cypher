all : main

main : main.c chiffrage.o affichage.o verif.o
	gcc chiffrage.o affichage.o verif.o main.c -o main

chiffrage.o : chiffrage.c chiffrage.h
	gcc -c chiffrage.c

affichage.o : affichage.c affichage.h
	gcc -c affichage.c

verif.o : verif.c verif.h
	gcc -c verif.c

clean :
	rm *.o

