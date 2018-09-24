#ifndef ADDITIONMATRICE_H
#define ADDITIONMATRICE_H
#include <stdio.h>

int AdditionMatrice(int *a,int arraySizeAM,int arraySizeAN,int *b,int arraySizeBM,int arraySizeBN)
{
    
    /*
    for(int i = 0; i < arraySizeX; i++)
    {
        printf("%d",i);
		printf(" = ");
		printf("%d ",a[i]);
    }*/
    
    int c[12]= {0,0,0,
			    0,0,0,
			    0,0,0,
			    0,0,0};
    /*c[0] = 1;
    printf("C0 = ");
    printf("%d\n",c[0]);*/
    
    if (arraySizeAM == arraySizeBM && arraySizeAN == arraySizeBN) { //Vérifie si les matrices sont de la même taille

        //show array a
        for(int i = 0; i < arraySizeAM; i++)
        {
            printf("   ");
            for(int j = 0; j < arraySizeAN; j++)
            {
                int index= j + i*arraySizeAN;
                printf("%d ",a[index]); //print la n-ieme valeur de la m-ieme rangée (j=horizontal, i = vertical)
                //c[index] = a[index] + b[index];
            }
            printf("\n");
        }
        printf("+\n");

        //show array b
        for(int i = 0; i < arraySizeBM; i++)
        {
            printf("   ");
            for(int j = 0; j < arraySizeBN; j++)
            {
                int index= j + i*arraySizeBN;
                printf("%d ",b[index]); //print la n-ieme valeur de la m-ieme rangée (j=horizontal, i = vertical)
                int sum = a[index];
                sum += b[index];
                c[index] = sum;
            }
            printf("\n");
        }
        printf("=\n");
    } 
    else
    {
        printf("ERREUR: MATRICES DE TAILLES DIFFÉRENTES\n");
    }
    

    for(int i = 0; i < arraySizeAM; i++)
    {
        printf("   ");
        for(int j = 0; j < arraySizeAN; j++)
        {
            //printf("%d",i);
            //printf(" = ");
            int index= j + i*arraySizeAN;
            printf("%d ",c[index]); //print la n-ieme valeur de la m-ieme rangée (j=horizontal, i = vertical)
        }
        printf("\n");
    }
    
    
   return 0;
}


#endif