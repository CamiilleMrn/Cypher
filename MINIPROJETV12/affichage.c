#include <stdio.h>
#include <string.h>

#include "affichage.h"

void presentation(){
    printf("\n                                    ALGORITHMES DE CRYPTAGES                                           \n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("| Avec quel algorithme souhaitez vous encoder votre message ( 0, 1, 2, 3 ) :                            |\n");
    printf("|   0. Quitter                                                                                          |\n");
    printf("|   1. Cesar                                                                                            |\n");
    printf("|   2. Vigenere                                                                                         |\n");
    printf("|   3. ROT13                                                                                            |\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf(" >>> ");

}

void choixCrypt(){
    printf("\n                                     ENCODAGE OU DECODAGE                                              \n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("| Souhaitez vous encoder ou decoder votre message ( 1 ou 2 ) :                                           |\n");
    printf("|   1. Encoder                                                                                           |\n");
    printf("|   2. Décoder                                                                                           |\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf(" >>> ");
}

void affichage (char chaine[],int i){
    if (i == 0){
        printf("\nVeuillez utiliser des caractères alphanumériques !\n");
    }
    else if (i == 1) {
        printf("\n----------------------------------\n");
        printf("\nCHAINE CODEE   : %s \n", chaine);
        printf("\n----------------------------------\n");
    }
    else if (i == 2){
        printf("\n----------------------------------\n");
        printf("\nCHAINE DECODEE : %s \n", chaine);
        printf("\n----------------------------------\n");
    }
    else if (i == 10){
        printf("\nVeuillez entrer la chaine à encoder : \n >>> ");
        fgets(chaine, 100, stdin);
        chaine[strlen(chaine)-1]='\0';
    }

    else if (i == 11) {
        printf("\nVeuillez entrer la chaine à décoder : \n >>> ");
        fgets(chaine, 100, stdin);
        chaine[strlen(chaine)-1]='\0';
    }


}