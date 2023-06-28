// Write a C program to check if two numbers in a pair are in ascending order or descending order.

#include <stdio.h>

void main(){
    int x,y;
    printf("Input a pair of numbers (for example 10,2:2,10) : ");
    printf("\nInput First Number : ");
    scanf("%d",&x);
    printf("Input Second Number : ");
    scanf("%d",&y);

    if(x>y){
        printf("The pair is a descending order.\n");
    }
    else{
        printf("The pair is a ascending order.\n");
    }
}