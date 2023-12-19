#include <stdio.h>

int compara(int n1,int n2){
    
    printf("\n\nApós compara\n");
printf("Seu endereço  de num1 %d\n",&n1);
printf("Seu endereço  de num2 %d\n",&n2);
    if (&n1>&n2){
        
        
    printf("\nSeu endereço  de num1 %d\n",&n1);
}    
    else 
    printf("\nSeu endereço  de num2 %d\n",&n2);
    
return 0;    
}

#include <stdio.h>

int main() {
int num1 =8, num2 = 2;

printf("Seu endereço  de num1 %d\n",&num1);
printf("Seu endereço  de num2 %d\n",&num2);

printf("\n\nAntes compara");
    if (&num1>&num2){
    printf("\nSeu endereço  de num1 %d\n",&num1);
}    
    else 
    printf("\nSeu endereço  de num2 %d\n",&num2);

compara(&num1,&num2);

return 0;
}
