/********
Fichier: serie.h
Auteurs: Philippe Turcotte turp2707
         Alexandre Lafleur lafa3307
Date: 3 octobre 2018
Description: Fonctions de puissance, de factoriel, de sinus et de cosinus
********/
#ifndef SERIE_H
#define SERIE_H
#include <stdio.h>

#define C 5

// Description: fonction qui calcule la p-ieme puissance d'un réel
// Préconditions: réel x, puissance entière p
// Postconditions: réel x^p
float Pow(float x,int p){
    if (p>=0) {
        float sum = 1;
        for(int i = 0; i < p; i++)
        {   
            sum = sum * x;
        }
        return sum;
    }
    else{
        printf("\nERREUR: exposant < 0, p = ");
        printf("%d\n", p);
        return 0;
    }
}

// Description: fonction qui calcule la factorielle d'un entier positif
// Préconditions: entier x
// Postconditions: entier x!
float Factoriel(float x){
    if(x<0) printf("ERREUR: x<0");
    if (x>1) {
        return x*Factoriel(x-1);
    } 
    else
    {
        return 1;
    }
}


// Description: fonction qui calcule le sinus d'une valeur à partir d'une série de C termes
// Préconditions: réel x
// Postconditions: réel sin(x)
float Sin(float x)
{
    float rep = 0;
    for(float i = 0; i < C; i++)
    {
        /*
        printf("i=");
        printf("%d\n", i);
        printf("signe=");
        printf("%f\n", Pow(-1,i));
        printf("diviseur=");
        printf("%f\n", (2*i+1));
        printf("puissance=");
        printf("%f\n", 2*i+1);
        */

        rep += ((Pow(-1,i))/Factoriel(2*i+1)) * Pow(x,2*i+1);
    }

    return rep;
}



// Description: fonction qui calcule le cosinus d'une valeur à partir d'une série de C termes
// Préconditions: réel x
// Postconditions: réel cos(x)
float Cos(float x)
{
    float rep = 0;
    for(float i = 0; i < C; i++)
    {
        rep += ((Pow(-1,i))/Factoriel(2*i)) * Pow(x,2*i);
    }
    return rep;
}



#endif