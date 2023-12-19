#include<stdio.h>

void soma(int n1, int max){


if (max<n1){
    printf("%d",max);
soma(n1,max+1);
}
else{
    printf("%d",n1);
}

}

int main(){
int n,max=1;

printf("digite o numero para somar");
scanf("%d",&n);

soma(n,max);

return 0;


}