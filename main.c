/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet :   3                                                          *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé :    Chiffrement de message                                       *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 :  MOLE Alexandre                                              *
*                                                                             *
*  Nom-prénom2 :  LECLERC Benoit                                              *
*                                                                             *
*  Nom-prénom3 :  MARION Camille                                              *
*                                                                             *
*  Nom-prénom4 :  EDELIN Louis                                                *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : main.c                                                    *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <string.h>

#include "chiffrage.h"
#include "affichage.h"
#include "verif.h"

void main(){

    // Déclaration des variables
    char ch[200];
    char option[10];
    char yn[10];
    int cle;
    char cleChaine[100];
    char choix[50];
    char sortie[50];

    FILE* fichier;
    fichier = fopen("CompteRendu.txt", "w");

    while (choix != "0"){
    presentation();
    fgets(choix,10,stdin);
    choix[strlen(choix)-1]='\0';

        // Cas utilisation algorithme César
        if (strcmp(choix,"1") == 0) {

            choixCrypt();
            fgets(option,10,stdin);
            option[strlen(option)-1] ='\0';

            // Encoder une chaine
            if (strcmp(option,"1") == 0){

                affichage(ch,10);

                while (verifAlpha(ch) == false){
                    affichage(ch,0);
                    affichage(ch,10);

                    verifAlpha(ch);

                }

                printf("\nSaisir la clé : \n >>> ");
                scanf("%d", &cle);

                chiffrage(ch,cle);
                fprintf(fichier,"Chiffrement César : %s\n",ch);
                affichage(ch,1);

                printf("\nVoulez vous le déchiffrer (y/n) ?\n >>> ");
                scanf("%s", &yn);

                if (strcmp(yn,"y") == 0){
                    dechiffrage(ch,cle);
                    affichage(ch,2);
                    fprintf(fichier,"Dechiffrement César : %s\n",ch);
                }
            }

            // Cas decoder une chaine
            else if (strcmp(option,"2") == 0){

                affichage(ch,11);
                fgets(ch, 100, stdin);
                ch[strlen(ch)-1]='\0';
                
                while (verifAlpha(ch) == false){
                    affichage(ch,0);
                    affichage(ch,11);
                    verifAlpha(ch);
                }

                printf("\nSaisir la clé : \n >>> ");
                scanf("%d", &cle);

                dechiffrage(ch,cle);
                fprintf(fichier,"Dechiffrement César : %s \n",ch);
                affichage(ch,2);
            }
        }

        // Cas utilisation algorithme vigenere
        else if (strcmp(choix,"2") == 0){

            choixCrypt();
            fgets(option,10,stdin);
            option[strlen(option)-1] ='\0';

            if (strcmp(option,"1") == 0){

                affichage(ch,10);
                printf("\nSaisir la clé : \n >>> ");
                fgets(cleChaine,100,stdin);
                cleChaine[strlen(cleChaine)-1] ='\0';

                chiffrageVigenere(ch,cleChaine,sortie);
                fprintf(fichier,"Chiffrement Vigenère : %s\n",sortie);
                affichage(sortie,1);
            
                printf("\nVoulez vous le déchiffrer (y/n) ?\n >>> ");
                scanf("%s", &yn);

                if (strcmp(yn,"y") == 0){
                    dechiffrageVigenere(sortie,cleChaine,sortie);
                    fprintf(fichier,"Déchifrement Vigénère : %s\n",sortie);
                    affichage(sortie,2);
                }
            }

        else if (strcmp(option,"2") == 0){

                affichage(ch,11);
                fgets(ch, 100, stdin);
                ch[strlen(ch)-1]='\0';
                
                while (verifAlpha(ch) == false){
                    affichage(ch,0);
                    affichage(ch,11);
                    verifAlpha(ch);
                }

                printf("\nSaisir la clé : \n >>> ");
                scanf("%s", &cle);

                dechiffrageVigenere(ch,cleChaine,sortie);
                fprintf(fichier,"Dechifrement Vigénère : %s\n",sortie);
                affichage(sortie,2);   
            }
        }

        // Cas utilisation ROT13
        if (strcmp(choix,"3") == 0) {

            choixCrypt();
            fgets(option,10,stdin);
            option[strlen(option)-1] ='\0';

            // Encoder une chaine
            if (strcmp(option,"1") == 0){

                affichage(ch,10);

                while (verifAlpha(ch) == false){
                    affichage(ch,0);
                    affichage(ch,10);

                    verifAlpha(ch);

                }

                chiffrageROT13(ch);
                fprintf(fichier,"Chiffrage ROT13 : %s\n",ch);
                affichage(ch,1);

                printf("\nVoulez vous le déchiffrer (y/n) ?\n >>> ");
                scanf("%s", &yn);

                if (strcmp(yn,"y") == 0){
                    dechiffrageROT13(ch);
                    fprintf(fichier,"Dechiffrage ROT13 : %s\n",ch);
                    affichage(ch,2);
                }

            }

            // Cas decoder une chaine
            else if (strcmp(option,"2") == 0){

                affichage(ch,11);
                fgets(ch, 100, stdin);
                ch[strlen(ch)-1]='\0';
                
                while (verifAlpha(ch) == false){
                    affichage(ch,0);
                    affichage(ch,11);
                    verifAlpha(ch);
                }

                dechiffrageROT13(ch);
                fprintf(fichier,"Déchiffrage ROT13 : %s\n",ch);
                affichage(ch,2);
            }
        }
        if (strcmp(choix,"0") == 0){
            fclose(fichier);
            break;
        }
    }
}