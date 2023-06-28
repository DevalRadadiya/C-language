/* Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers. */

#include <stdio.h>

void main(){
    float numbers[5];
    int j,p=0,n=0;
    
    printf("Enter Number 1 :");
    scanf("%f",&numbers[0]);
    printf("Enter Number 2 :");
    scanf("%f",&numbers[1]);
    printf("Enter Number 3 :");
    scanf("%f",&numbers[2]);
    printf("Enter Number 4 :");
    scanf("%f",&numbers[3]);
    printf("Enter Number 5 :");
    scanf("%f",&numbers[4]);

    for(j=0;j<5;j++){
        if(numbers[j]>0){
            p++;
        }
        else if(numbers[j]<0){
            n++;
        }
    }
    printf("\nPositive Number : %d", p);
    printf("\nNegative Number : %d", n);
}