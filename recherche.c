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

    int main(int argc, char **argv)
{
    char mot1[] = "anticonstitutionnellement";
	char mot2[] = "bonjour";
	char mot3[] = "allocommentcava";
    

    printf("%d\n",recherche(mot1,'n'));
    printf("%d\n",recherche(mot2,'e'));
	printf("%d\n",recherche(mot2,'r'));
    printf("%d\n",recherche(mot3,'a'));
    return 0;
}