/* Write a C program that reads an integer and checks the specified range to which it belongs. 
Print an error message if the number is negative and greater than 80. */

#include <stdio.h>

void main(){
    int x;
    printf("Input an Integer : ");
    scanf("%d",&x);

    if(x>=0 && x<=20){
        printf("\nRange is [0,20]");
    }
    else if (x>=21 && x<=40){
        printf("\nRange is [21,40]");
    }
    else if (x>=41 && x<=60){
        printf("\nRange is [41, 60]");
    }
    else if (x>=61 && x<=80){
        printf("\nRange is [61, 80]");
    }
    else if (x>=81 && x<=100){
        printf("\nRange is [81, 100]");
    }
    else{
        printf("\nOut of range");
    }
}