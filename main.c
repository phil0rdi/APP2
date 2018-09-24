#include <stdio.h>
#include "fonction1.h"
#include "additionmatrice.h"


int main(int argc, char **argv)
{
	int x,y,z;
	x=4;
	y=7;
	
	
	const int arraySizeAM = 4;
	const int arraySizeAN = 3;
	//int a[3] = {1,0,1};
	int a[12]= {1,1,0,
			    0,1,1,
			    1,0,1,
			    0,0,0};

	const int arraySizeBM = 4;
	const int arraySizeBN = 3;
	//int a[3] = {1,0,1};
	int b[12]= {0,0,1,
			    1,0,0,
			    0,1,0,
			    1,1,1};
	  
	 
	 
	 /*
	printf("1,1 = ");
	printf("%d ",array[1][1]);
	*/ 

	z = AdditionMatrice(a, arraySizeAM, arraySizeAN, b, arraySizeBM,arraySizeBN);
	// printf("z = ");
	// printf("%d\n",z);


	return 0;
}