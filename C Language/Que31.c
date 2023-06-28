/* Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. 
Print even if the number is 0. */

#include <stdio.h>

void main(){
    int x;
    printf("Enter Number : ");
    scanf("%d",&x);

    if(x==0){
        printf("Positive");
    }
    else if(x<0 && (x%2) != 0){
        printf("Negative Odd");
    }
    else if(x<0 && (x%2) == 0){
        printf("Negative Even");
    }
    else if(x>0 && (x%2) == 0){
        printf("Positive Even");
    }
    else if(x>0 && (x%2) != 0){
        printf("Positive Odd");
    }
}