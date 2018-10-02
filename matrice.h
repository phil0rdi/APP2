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

#define M 2
#define N 2
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

/*Addition de deux matrices : Cette opération fait l’addition de deux matrices fournies
lors de l’appel(matriceA ET matriceB) et le résultat est donné dans une troisième matrice aussi fournie
lors de l’appel(matriceC). Les matrices ont m lignes et n colonnes et ces deux valeurs sont
des constantes (M et N) définies globalement et ne sont pas passées en
paramètres. Cette opération n’a pas de valeur de retour.*/
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

/*Multiplication de deux matrices : Cette opération fait la multiplication de deux matrices
carrées fournies lors de l’appel(matriceA et matriceB) et le résultat est donné dans une troisième
matrice aussi fournie lors de l’appel(matriceC). Les matrices sont de dimensions n qui est une
constante (N) définie globalement et n’est pas passée en paramètres.
Cette opération n’a pas de valeur de retour*/
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