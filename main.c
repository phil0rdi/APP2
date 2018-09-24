#include <stdio.h>


int add( int *a, int *b){
	int c;
	c = *a+*b;
	return c;
}


int main(int argc, char **argv)
{
	int x,y,z;
	x=4;
	y=7;
	z= add(&x,&y);
	printf("%d",z,"\n");
	printf("YYYOOOOO\n");
	
	
	return 0;
}