#include<stdio.h>


void main(){
int n1=3,*pt1;
int n2=5,*pt2;

pt1=&n1;
pt2=&n2;

printf("Endereço de  n1 %d\n", &n1);
printf("Endereço de  n2 %d\n\n", &n2);

if (&pt1>&pt2){
    printf("Endereço de  pt1 %p\n", &pt1);
}else
    printf("Endereço de pt2 %p\n", &pt2);
}