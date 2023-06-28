/*Write a C program that accepts some integers from the user and finds the highest value and the input position.*/

#include <stdio.h>
#define MAX 5

void main(){
    int number[MAX],i,j,max=0,numofpos=0;
    printf("input 5 Integer : \n");
    for(i=0;i<MAX;i++){
        scanf("%d",&number[i]);
    }

    for(j=0;j<MAX;j++){
        if(number[j] > max){
        max=number[j];
        numofpos= j;
    }
    }
    printf("Highest value %d\nPosition is %d\n",max,numofpos+1);

}