// Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50

#include <stdio.h>

void main(){
    float s=0;

    for(int i=1;i<=50;i++){
        s+=(float)1/i;
    }
    printf("Value of S : %.2f",s);
}