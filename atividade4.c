#include <stdio.h>

int muda(int *num1, int *num2){
    *num1   = 5;
    *num2   = 7;
    return *num1,*num2;
}
void main(){
int val1= 10, val2= 8;

printf("Antes da mudanca\n");
printf("valor 1: %d\n", val1);
printf("valor 2: %d\n", val2);

muda(&val1,&val2);

printf("Depois da mudanca\n");
printf("valor 1: %d\n", val1);
printf("valor 2: %d\n", val2);

}