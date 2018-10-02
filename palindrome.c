#include <stdio.h>

int palindrome(char mot[]){

	int i = 0;
	while(mot[i] != '\0'){
			//printf("%c\n", mot[i]);
			i++;
		}
	int max = i;
	int nbr = max - 2;
	int palindrome = 1;
	//printf("%d", max);
	for(int i = 0; i < max-1; i++)
	{
		//printf("%c VS %c", mot[i], mot[nbr]);
		
		if (mot[i] != mot[nbr]) {
			//printf("NON");
			palindrome = 0;
	
		}

		nbr--;
	}
	return palindrome;
}



int main(int argc, char **argv)
{
char mot4[] = "kayak\n";
char mot5[] = "allo\n";
char mot6[] = "alla\n";
char string[50];
fgets(string,sizeof(string), stdin);

printf("%d\n",palindrome(mot4 ));
printf("%d\n",palindrome(mot5 ));
printf("%d\n",palindrome(mot6 ));
printf("%s\n", string);
printf("%d\n",palindrome(string ));




	return 0;
}




