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
*  Nom du fichier : chiffrage.c                                               *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#include "chiffrage.h"

void chiffrage(char *chaine, int cleChiffrage){
    for (int i=0 ; i < strlen(chaine) ; i++) {
        if (chaine[i] == ' '){
            i++;
        }

        char newposmin = (chaine[i] - 'a')+1;
        char newposmaj = (chaine[i] - 'A')+1;
        char newposnum = (chaine[i] - '0')+1;

        if ((newposmin + cleChiffrage) > 26){
            chaine[i] = ((newposmin + cleChiffrage) - 26) + 'a'-1;
        }
        else if ((newposmaj + cleChiffrage) > 26 && chaine[i] < 'a'){
            chaine[i] = ((newposmaj + cleChiffrage) - 26) + 'A'-1;
        }
        else if ((newposnum + cleChiffrage) > 10 && chaine[i] < 'A'){
            chaine[i] = ((newposnum + cleChiffrage) - 10) + '0'-1;
        }
        else {
            chaine[i] = chaine[i] + cleChiffrage;
        }
    }
}

void dechiffrage(char *chaine, int cleChiffrage){
    for (int i=0; i<strlen(chaine); i++) {
        if (chaine[i] == ' '){
            i++;
        }
        char temp = chaine[i]-cleChiffrage;
        if (temp < 'a' && chaine[i] > 'Z'){
            char res = 'a' - temp;
            chaine[i] = 'z' - res+1;
        } 
        else if (temp < 'A' && chaine[i] > '9'){
            char res = 'A' - temp;
            chaine[i] = 'Z' - res+1;
        }
        else if (temp < '0'){
            char res = '0' - temp;
            chaine[i] = '9' - res+1;
        }
        else {
            chaine[i] = chaine[i]-cleChiffrage;
        }
    }
}

void chiffrageVigenere(char *chaine, char *cle, char *sortie){
    int i, taille = strlen(cle);
    for(i = 0; chaine[i] != '\0'; i++){
        if( (chaine[i] >= 'A') && (chaine[i] <= 'Z') ){
            int indice = (chaine[i] + cle[i % taille] - 6) % 26;
            sortie[i] = 'A' + indice;
        }
        else if( (chaine[i] >= 'a') && (chaine[i] <= 'z') ){
            int indice = (chaine[i] + cle[i % taille] - 12) % 26;
            sortie[i] = 'a' + indice;
        }
        else 
            sortie[i] = chaine[i];
    }
    sortie[i] = '\0';
}

void dechiffrageVigenere(char *chaine, char *cle, char *sortie){
    int i, taille = strlen(cle);
    int indice;
    for(i = 0; chaine[i] != '\0'; i++){
        if( (chaine[i] >= 'A') && (chaine[i] <= 'Z') ){
            indice = ((chaine[i] - cle[i % taille] )% 26) +6;
            sortie[i] = 'A' + indice;
        }
        else if( (chaine[i] >= 'a') && (chaine[i] <= 'z') ){
            indice = (chaine[i] - cle[i % taille] + 26) % 26;
            sortie[i] = 'a' + indice;
        }
        else 
            sortie[i] = chaine[i];
    }
    sortie[i] = '\0';
}

void chiffrageROT13(char *chaine){
    chiffrage(chaine,13);
}

void dechiffrageROT13(char *chaine){
    dechiffrage(chaine,13);
}