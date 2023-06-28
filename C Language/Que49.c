/*Write a C program to read and print the elements of an array with length 7. Before printing, insert the triple 
of the previous position, starting from the second position.
For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162*/

#include <stdio.h>

void main(){
    int n[5],i,x;
    printf("Input the first number of the array : ");
    scanf("%d",&x);

    for(i=0;i<5;i++){
        n[i]=x;
        x=x*3;
    }
    for(i=0;i<5;i++){
        printf("n[%d] = %d\n",i,n[i]);
    }
}