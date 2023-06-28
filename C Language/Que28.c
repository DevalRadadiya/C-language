// Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.

#include <stdio.h>

void main(){
    float number[5],total=0,avg;
    int j,p=0;

    printf("Enter the firsr number : ");
    scanf("%f",&number[0]);
    printf("Enter the second number : ");
    scanf("%f",&number[1]);
    printf("Enter the third number : ");
    scanf("%f",&number[2]);
    printf("Enter the fourth number : ");
    scanf("%f",&number[3]);
    printf("Enter the fifth number : ");
    scanf("%f",&number[4]);

    for(j=0;j<5;j++){
        if(number[j]>0){
            p++;
            total+=number[j];
        }
    }
    avg=total/p;
    printf("\nPositive number are %d",p);
    printf("\nAverage value of the said positive number are %.2f",avg);
}