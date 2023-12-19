#include <stdio.h>

int mudaN(int *num)
{
    *num = 9;
    return *num;
}
float mudaR(float *num)
{
    *num = 7.2;
    return *num;
}

char mudaL(char *pala){
    *pala='b';
    return *pala;
}


int main(){
int numInt   = 2;
int mudadoN;

float numR   = 4.5;
float mudadoNR;

char palaV   = 'R';
char mudadol;


printf("Num inteiro antes de mudar: %d\n",numInt);

printf("Num real antes de mudar: %f\n",numR);

printf("Letra sem mudar: %c\n",palaV);

mudadoNR = mudaR(&numR);
printf("\n\nNum real depois de mudar: %f\n",mudadoNR);

mudadoN = mudaN(&numInt);
printf("Num inteiro depois de mudar: %d\n",mudadoN);

mudadol = mudaL(&palaV);
printf("Letra depois de mudar: %c\n",mudadol);

return 0;
}
