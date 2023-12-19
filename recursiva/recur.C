#include <stdio.h>

int fat(int a){
    if(a==0||a==1)
    {
        return 1;
    }
    else
    {
        return a * fat(a-1); 
    }
}
int main(){
int b=3;

int c = fat(b);
                                                                             
printf("O fatorial do 3 seria: %d",c);

return 0;

}