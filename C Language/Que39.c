//  Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.

#include <stdio.h>

void main(){
    int x,y,temp,i,sum=0;
    printf("Input the first number : ");
    scanf("%d",&x);
    printf("Input the second number : ");
    scanf("%d",&y);
    
    if(x>y){
        temp=y;
        y=x;
        x=temp;
    }

    for(i=x;i<=y;i++){
        if(i%17 != 0){
            sum+=i;
        }
    }
    printf("\nSum : %d",sum);
}