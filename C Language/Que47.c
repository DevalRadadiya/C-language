// Write a C program that finds all the divisors of an integer.

#include<stdio.h>

void main(){
    int x;
    printf("Input an integer : ");
    scanf("%d",&x);

    printf("All the divisors of %d are : ",x);
    for(int i=1;i<=x;i++){
        if((x%i)==0){
            printf("%d\t",i);
        }
    }
}