#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*  Prend en entrée une chaine de caractère 
    Renvoie TRUE si la chaine est en alphanumérique, FALSE sinon */
bool verifAlpha (char chaine []);

/*  Prend en entrée une chaine de caractère
    Converti les accents de la chaîne en chaine sans accent */
char * conversionAccents (char * chaine []);