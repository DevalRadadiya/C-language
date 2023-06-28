// Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.

#include <stdio.h>
#define AL 5
#define MAX 5

void main(){
    float N[AL];
    int i;
    printf("Input the 5 numbers of an array : ");
    for(i=0;i<AL;i++){
        scanf("%f",&N[i]);
    }
    for(i=0;i<AL;i++){
        if(N[i] < MAX){
            printf("A[%d]=%.1f\n",i,N[i]);
        }
    }
}