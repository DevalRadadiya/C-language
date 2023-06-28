// Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value

#include<stdio.h>

void main(){
    int w1,w2,i1,i2,result;

    printf("Weight-Item 1 : ");
    scanf("%d",w1);

    printf("\nNo. of Items 1 : ");
    scanf("%d",i1);

    printf("\nWeight-Item 2 : ");
    scanf("%d",w2);

    printf("\nNo. of Items 2 : ");
    scanf("%d",i2);

    result=(float)((w1*i1)+(w2*i2))/(i1+i2);
    printf("\nAverage Value = %f",result);

}
