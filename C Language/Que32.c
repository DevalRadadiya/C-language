// Write a C program to print all numbers between 1 and 100 which are divided by a specified number and the remainder will be 3

#include <stdio.h>

void main(){
    int a;
    printf("Enter A : "); 
    scanf("%d",&a);

    for(int i=1; i<=100;i++){
        if(i%a==3){
            printf("%d ",i);
        }
    }
}