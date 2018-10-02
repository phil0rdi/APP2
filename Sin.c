#include <stdio.h> 

int exp(int base, int exp){
    int final = 1;
    for(int i = 0; i < exp; i++)
    {
        final = final * base;
    }
    return final;
}

int fact(int base){
    int final = 1;
    for(int i = 1; i < base + 1; i++)
    {
        final = final * i;
    }
    return final;
}

int sinx(int angle, int max){
    int etape2 = 0;
    int j = 2;
    for(int i = 1; i < (max*2); i++)
    {
        int etape1 = 0;
        if (i % 2) {
            /* PAIR DONC RIEN */ 
        }else{
            etape1 = ( exp(angle,i) / fact(i) );
            etape2 =  etape2 + ( exp(-1,j) * etape1 );
            j++;
        }
    }
    return etape2;
}

int main(int argc, char **argv)
{
    printf("%d", sinx(90,10));
    printf("%d", sinx(90,5));
    printf("%d", sinx(45,10));
}

