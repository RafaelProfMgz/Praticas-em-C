#include<stdio.h>


int potencia(int x, int y){
    
    if(y==0){
        return 1;
    }
    else{
        return x*x;
    potencia(x,y-1);
    
    }
}
int main(){
int n1, n2;

printf("Numero:");
scanf("%d",&n1);
printf("Potencia:");
scanf("%d",&n2);


int resultado = potencia(n1,n2);
printf("%d",resultado);
return 0;
}