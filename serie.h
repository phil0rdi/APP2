#ifndef SERIE_H
#define SERIE_H
#include <stdio.h>

/*Calcul du sinus avec une série : Cette opération retourne la valeur du calcul du sinus
à partir d’une série (voir l’annexe C). L’angle en radians est spécifié lors l’appel et la
valeur retournée est le résultat du calcul. Les deux valeurs sont des nombres réels.
Le nombre de termes utilisés dans la série pour le calcul est spécifié globalement
uniquement par une constante (const ou #define) et n’est pas passé en paramètre.


Calcul du cosinus avec une série : Cette opération retourne la valeur du calcul du
cosinus à partir d’une série (voir l’annexe C). L’angle en radians est spécifié lors de
l’appel et la valeur retournée est le résultat du calcul. Les deux valeurs sont des
nombres réels. Le nombre de termes utilisés dans la série pour le calcul est spécifié
globalement uniquement par une constante (const ou #define) et n’est pas passé en
paramètre.*/

#define C 10

float Pow(float x,int p){
    //calculates positive powers
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