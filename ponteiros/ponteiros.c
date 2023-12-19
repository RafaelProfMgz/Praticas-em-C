#include <stdio.h>

int main(){
    int numero = 3, *p;

    printf("\nO valor e %d\n",numero);
    p= &numero;
    printf("\nO valor e %p\n",&numero);
    *p= 25;
    printf("\nO valor e %d\n",numero);


return 0;

}