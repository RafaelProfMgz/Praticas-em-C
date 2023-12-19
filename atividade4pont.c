#include <stdio.h>


void maior(int *a, int *b){
    int aux;
    if (*a<*b){
        aux=*a;
        *a=*b;
        *b=aux;
} 
}

int main(){
int a;
int b;

printf("Valor digite 2:\t");
scanf("%d%d", &a,&b);

maior(&a,&b);

printf("trocados %d e %d",a,b);

return 0;
}