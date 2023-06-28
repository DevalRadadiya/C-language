// Write a C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.

#include <stdio.h>

void main(){
    int x,y,temp,i,sum=0;
    printf("Enter First Number : ");
    scanf("%d",&x);
    printf("Enter Second Number : ");
    scanf("%d",&y);

    if(x>y){
        temp=y;
        y=x;
        x=temp;
    }

    for(i=x+1;i<y;i++){
        if((i%7) == 2 || (i%7) == 3){
            printf("%d\n",i);
        }
    }
}