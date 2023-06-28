/*  Write a C program to print a number, its square and cube, s
tarting with 1 and printing n lines. Accept the number of lines (n, integer) from the user. */

#include <stdio.h>

void main(){
    int a,i,j=1,x=0;
    printf("Input number of lines: \n");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
    
}