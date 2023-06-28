/* Write a C program to read an array of length 6, change the first element by the last, the second element by the 
fifth and the third element by the fourth. Print the elements of the modified array.*/

#include <stdio.h>
#define AL 5

void main(){
    int array[AL],i,temp;

    printf("Input the 5 nummbers of array: ");
    for(i=0;i<AL;i++){
        scanf("%d",&array[i]);
    }

    for(i=0;i<AL;i++){
        if(i<(AL/2)){
            temp=array[i];
            array[i]=array[AL-(i+1)];
            array[AL-(i+1)]=temp;
        }
    }

    for(i=0;i<AL;i++){
        printf("Array[%d]=%d\n",i,array[i]);
    }
}