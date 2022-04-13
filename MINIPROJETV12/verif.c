#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#include "verif.h"

bool verifAlpha (char chaine []){
    for (int i = 0 ; i < strlen(chaine) ; i++){
        if (chaine[i] == ' '){
            i++;
        }
        else if (isdigit(chaine[i]) != 0){
            i++;
        }
        else if (isalpha(chaine[i]) == 0){
            return false;
        }
    }
    return true;
}

