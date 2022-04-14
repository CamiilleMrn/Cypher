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
*  Nom du fichier : chiffrage.h                                               *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <string.h>


/*  Entrée : chaine (chaine à chiffrer), cleChiffrage (clé utilisé pour le chiffrement)
    Chiffre une chaine à l'aide de la méthode de César
*/
void chiffrage(char *chaine, int cleChiffrage);


/*  Entrée : chaine (chiffrée), cleChiffragde (Clé pour déchiffrer le message)
    Dechiffre un message grâce à une clé de chiffrage
*/
void dechiffrage(char *chaine, int cleChiffrade);

/*  Entrée : chaine (chaine à chiffrer), cleChiffrage (clé utilisée pour le chiffrement)
    Chiffre une chaine à l'aide de la méthode de Vigénraire
*/
void chiffrageVigenere(char * chaine, char * cle, char *sortie);

/*  Entrée : chaine (chiffrée), chaineChiffragde (Clé pour déchiffrer le message)
    Dechiffre un message grâce à une chaine de chiffrage
*/
void dechiffrageVigenere(char * chaine, char * cle, char *sortie);

/*  Entrée : chaine(chaine à chiffrer)
    Chiffre une chaine de caractère grâce à la méthode de ROT13
*/
void chiffrageROT13(char *chaine);

/*  Entrée : chaine(chaine à dechiffrer)
    Dechiffre une chaine de caractère grâce à la méthode de ROT13
*/
void dechiffrageROT13(char *chaine);