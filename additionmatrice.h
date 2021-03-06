#ifndef ADDITIONMATRICE_H
#define ADDITIONMATRICE_H
#include <stdio.h>

#define M 4
#define N 3

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


#endif