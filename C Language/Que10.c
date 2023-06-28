// Write a C program that accepts two integers from the user and calculates the product of the two integers

#include <stdio.h>

void main(){
    int a,b;
    printf("Enter A : "); 
    scanf("%d",&a);
    printf("Enter B : "); 
    scanf("%d",&b);

    printf("\nThe Product of A and B is: %d",a*b);
}