#include<stdio.h>

 void contador(int numero){
    if (numero==0){
        printf("nada");
    }
    else{
        
        contador(numero-1);
        printf("\n%d\t",numero);
 }
 }
int main(){
int n;


printf("numero:");
scanf("%d",&n);
contador(n);

return 0;
 }