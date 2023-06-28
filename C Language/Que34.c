// Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.

#include <stdio.h>

void main(){
    int x,y,total=0;

    printf("Inpur pair of numbers : ");
    scanf("%d",&x);
    printf("Input second number of pair : ");   
    scanf("%d",&y);

    if(x<y){
        
    }
    for(int i=y;i<=x;i++){
        if(i%2 != 0){ 
            printf("%d\n",i);
        }
        total += i;
    }
    printf("Total = %d",total);
}