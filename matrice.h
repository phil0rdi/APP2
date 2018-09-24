#ifndef MATRICE_H
#define MATRICE_H
#include <stdio.h>

#define M 2
#define N 2
void PrintMatrice(int m[M][N]){
 for(int i = 0; i < M; i++)
    {
        printf("   ");
        for(int j = 0; j < N; j++)
        {
            printf("%d ",m[i][j]); //print la n-ieme valeur de la m-ieme rangée (j=horizontal, i = vertical)
        }
        printf("\n");
    }
    printf("\n");
}

void AdditionMatrice(int a[M][N],int b[M][N],int c[M][N])
{
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void MultiplicationMatrice(int a[M][N],int b[M][N],int c[M][N])
{
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            int sum = 0 ;
            for(int k = 0; k < N; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            
            c[i][j] = sum;
        }
    }
}

#endif