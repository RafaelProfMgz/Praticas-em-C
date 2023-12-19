#include <stdio.h>


int main(){
int a=5 ,  *pa;
float b=4.5, *pb;
char c='a', *pc;

pa = &a;
pb = &b;
pc = &c;

printf("O valor de a %d\n", a);
printf("O valor de b %f\n", b);
printf("A letra em c %c\n\n", c);

*pa= 8; *pb = 5.8; *pc ='c';

printf("O valor de a %d\n", a);
printf("O valor de b %f\n", b);
printf("A letra em c %c\n", c);

return 0;    
}