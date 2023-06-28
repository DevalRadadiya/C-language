// Write a C program to find and print the square of all the even values from 1 to a specified value.

#include <stdio.h>

void main(){
    int a;
    printf("List of square of each one of the even values : ");
    scanf("%d",&a);
    
    for(int i=1; i<=a; i++){
        if(i%2==0){
            printf("%d^2 = %d\n",i,i*i);
        }
    }
}