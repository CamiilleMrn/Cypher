<img width="200" height="150" align="left" style="float: left; margin: 0 10px 0 0;" alt="IUT" src="https://cdn.discordapp.com/attachments/739553949199106158/937150810431823912/logoIUT.jpg"> 

# Cypher

Application en C encodant et décodant un message selon les algorithmes : César, Vigénère et ROT13
---
<div id="Som"/>
  
## Sommaire

* [Objectif](#Obj)
* [Démarrage](#Démarrage)
* [Conçu avec](#Concu)
* [Documentation](#Docu)
  * [Chiffrage](#Chiff)
  * [Affichage](#Aff)
  * [Verif](#Verif)
  * [Main](#main)
* [Equipe](#Equipe)


<div id="Obj"/>
  
## Objectif

  Dans le but de développer une application de protection de textes confidentiels, notre équipe de développeurs a conçu un outil permettant le chiffrement de messages. Le schéma ci-dessous montre l’enchaînement des traitements à appliquer afin de chiffrer un message en clair et afficher le résultat. Le schéma montre également la procédure inverse : déchiffrer un message pour l’afficher en clair

<img src="https://media.discordapp.net/attachments/950656324377640960/963814296414990366/unknown.png">

<div id='Démarrage'/>

## Démarrage

Pour lancer notre programme il suffit simplement de télécharger notre projet et dans un terminal taper : ``make all && ./main``.

<div id='Concu'/>

## Conçu avec

* [VisualStudioCode](https://code.visualstudio.com/) - IDE
* [WSL](https://atom.io/) - Linux sous windows (bureau distant)

<div id='Docu'/>

<div id="Chiff"/>

### Chiffrage

```C
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
```

<div id="Aff"/>

### Affichage

```C
/*  Entrée : chaine (chaine de caractère à afficher après décodage ou encodage), int (valeur permettant de choisir ce qu'on doit afficher)
    Affiche le message décoder ou encoder par l'algorithme de césar
*/
void affichage (char chaine[],int i);

/* Affiche graphiquement le message de choix de la technique de cryptage
*/
void presentation();

/* Affiche graphiquement le message de choix : encodage ou decodage
*/
void choixCrypt();
```

<div id="Verif"/>

### Verif

```C
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*  Prend en entrée une chaine de caractère 
    Renvoie TRUE si la chaine est en alphanumérique, FALSE sinon */
bool verifAlpha (char chaine []);

/*  Prend en entrée une chaine de caractère
    Converti les accents de la chaîne en chaine sans accent */
char * conversionAccents (char * chaine []);
```

<div id="main"/>

### main

```C
/* Contient uniquement le main appelant les différentes fonctions
*/
void main();
```

<div id='Equipe'/>

## Equipe
L'équipe est constituée de :
  - MOLE Alexandre
  - LECLERC Benoit
  - EDELIN Louis 
  - MARION Camille
 
 Etudiants en informatique à l'IUT Paul Sabatier de Toulouse
