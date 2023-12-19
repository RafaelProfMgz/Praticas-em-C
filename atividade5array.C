#include <stdio.h>

void main() {
float v[10];

for (int i = 0; i<10;i++){
printf("Endereço V[%d]: %p\n",i,&v[i]);
}
}