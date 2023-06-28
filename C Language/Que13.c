// Write a C program that accepts three integers and finds the maximum of three.

#include <stdio.h>
#include <stdlib.h>

void main(){
    int a,b,c,result,max;
    printf("Input first integer : ");
    scanf("%d",&a);
    printf("Input second integer : ");
    scanf("%d",&b);
    printf("Input third integer : ");
    scanf("%d",&c);

    result = (a+b+abs (a-b))/2;
    max=(result+c+abs (result-c))/2;

    printf("\nMaximum value of 3 numbers : %d",max);
}