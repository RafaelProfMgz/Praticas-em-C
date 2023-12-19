#include <stdio.h>

int main() {
int num1 =8, num2 = 2;

printf("Seu endereço  de num1 %d\n",&num1);
printf("Seu endereço  de num2 %d\n",&num2);
    
if (&num1>&num2){
    printf("\nSeu endereço  de num1 %d\n",&num1);
}    
    else 
    printf("\nSeu endereço  de num2 %d\n",&num2);
return 0;
}
