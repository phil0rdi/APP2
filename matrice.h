/********
Fichier: matrice.h
Auteurs: Philippe Turcotte turp2707
         Alexandre Lafleur lafa3307
Date: 3 octobre 2018
Description: Fonctions d'addition, de multiplication et d'affichage de matrices
********/

#ifndef MATRICE_H
#define MATRICE_H
#include <stdio.h>

#define M 3
#define N 2

// Description: fonction qui affiche dans la console une matrice M par N
// Préconditions:  matrice d'entiers m M x N
// Postconditions: aucune
void PrintMatrice(int m[M][N]){
 for(int i = 0; i < M; i++)
    {
        printf("   | ");
        for(int j = 0; j < N; j++)
        {
            printf("%d ",m[i][j]); //print la n-ieme valeur de la m-ieme rangée (j=horizontal, i = vertical)
        }
        printf("|\n");
    }
    //printf("\n");
}

// Description: fonction qui additionne deux matrices M par N 
// Préconditions:  matrices d'entiers matriceA, matriceB, matriceC M x N.
// Postconditions: aucune, réponse enregistrée dans matriceC
void AdditionMatrice(int matriceA[M][N],int matriceB[M][N],int matriceC[M][N])
{
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            matriceC[i][j] = matriceA[i][j] + matriceB[i][j];
        }
    }
}

// Description: fonction qui multiplie deux matrices M par N 
// Préconditions:  matrices d'entiers matriceA, matriceB, matriceC M x N.
// Postconditions: aucune, réponse enregistrée dans matriceC
void MultiplicationMatrice(int matriceA[M][N],int matriceB[M][N],int matriceC[M][N])
{
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int sum = 0 ;
            for(int k = 0; k < N; k++)
            {
                sum += matriceA[i][k] * matriceB[k][j];
            }
            
            matriceC[i][j] = sum;
        }
    }
}

#endif
