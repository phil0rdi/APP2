#include <stdio.h>
#include "fonction1.h"
#include "matrice.h"
#include "serie.h"

#define PI 3.14159265359

int main(int argc, char **argv)
{

	//SERIES
	//printf("8^3= ");
	//printf("%f ",Pow(-1,4));

	//printf("0!= ");
	//printf("%f ",Factoriel(0));

	//printf("sin = ");
	//printf("%f ",Sin(2*3.1459));
	
	//printf("cos = ");
	//printf("%f ",Cos(2*3.1459));
	
	
	

	/*
	//MultiplicationMatrice
	int a[N][N]={{10,11},
				 {12,13}};

	int b[N][N]={{7,8},
				 {9,10}};	

	
				// {{0,0,1,},
			 	// 	{1,0,0,},
				// 	{1,0,1,}};
	  
	int c[N][N]={{0,0},
				 {0,0}};

	PrintMatrice(a);
	PrintMatrice(b);
	MultiplicationMatrice(a,b,c);
	PrintMatrice(c);
	*/

	//PLAN DE TESTS

	//FONCTION SINUS
	printf("FONCTION SINUS\n");
	printf("SIN(1) = %.4f\n", Sin(1));
	printf("SIN(0) = %.4f\n", Sin(0));
	printf("SIN(PI/4) = %.4f\n", Sin(PI/4));
	printf("SIN(PI/2) = %.4f\n", Sin(PI/2));

	//ADDITION MATRICE	
	printf("\nADDITION MATRICE\n");

	int a[M][N]={{1,2,},
				 {3,4,},
				 {5,6,}};

	int b[M][N]={{6,5},
				 {4,3},
				 {2,1}};
	  
	 int c[M][N]={{0,0},
				  {0,0},
				  {0,0}};
	
	printf("  Matrice A\n");
	PrintMatrice(a);
	printf("+\n");
	printf("  Matrice B\n");
	PrintMatrice(b);
	AdditionMatrice(a, b, c);
	printf("=\n");
	printf("  Résultat\n");
	PrintMatrice(c);

	return 0;
}