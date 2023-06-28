// Write a C program that accepts two integers from the user and calculates the sum of the two integers.

#include <stdio.h>

void main(){
    int a,b;
    printf("Enter A : "); 
    scanf("%d",&a);
    printf("Enter B : "); 
    scanf("%d",&b);

    printf("\nThe Sum of A and B is: %d",a+b);
}