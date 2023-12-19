// Online C compiler to run C program online
#include <stdio.h>

void dobro(int *a, int *b){
*a= *a+*a;
*b= *b+*b;
}
void main() {
int a=0, b=0;

printf("Digite 2 numeros para variavel A e variavel B:\t");
scanf("%d%d", &a,&b);

printf("Valores e locais de endereco antes da soma\n");
printf("Local da variavel A: %p\n",&a);
printf("Valor da variavel A: %d\n",a);

printf("Local da variavel B: %p\n",&b);
printf("Valor da variavel B: %d\n",b);

dobro(&a,&b);
printf("\nValores e locais de endereco apos da soma\n");
printf("Local da variavel A: %p\n",&a);
printf("Valor da variavel A: %d\n",a);

printf("Local da variavel B: %p\n",&b);
printf("Valor da variavel B: %d\n",b);

}