#include <stdio.h>


int recherche(char mot[], char lettre){

		int i = 0;
		//printf("\n");

		while(mot[i] != lettre && mot[i] != '\0'){
			//printf("%c\n", mot[i]);
			i++;
		}

		//printf("\n");
		if(mot[i] == '\0' ) return -1;

		return i;

	}



int palindrome(char mot[]){

	int i = 0;
	while(mot[i] != '\0'){
			//printf("%c\n", mot[i]);
			i++;
		}

	int max = i;
	int nbr = max - 1;
	int palindrome = 0;
	//printf("%d", max);
	
	for(int i = 0; i < max; i++)
	{
		//printf("%c VS %c", mot[i], mot[nbr]);
		
		if (mot[i] != mot[nbr]) {
			//printf("NON");
			palindrome = 1;
	
		}

		nbr--;
	}

	return palindrome;
	
	

}



int main(int argc, char **argv)
{
char mot1[6] = {'k','a','y','a','k','\0'};
char mot2[5] = {'a','l','l','o','\0' };
char mot3[5] = {'a','l','l','a','\0' };
printf("%d",palindrome(mot1) );
printf("%d",(recherche(mot1,'y') + 1 ));
printf("%d",palindrome(mot2) );
printf("%d",(recherche(mot2,'o') + 1 ) );
printf("%d",palindrome(mot3 ));
printf("%d",(recherche(mot3,'a') + 1 ) );


	return 0;
}




