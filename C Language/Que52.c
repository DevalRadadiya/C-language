// Write a C program to read an array of length 6 and find the smallest element and its position.

#include <stdio.h>

void main(){
    int e,i,sval,position;

    printf("Input the lrngth of array :");
    scanf("%d",&e);

    int v[e];
    printf("Input the Array elements : ");
    for(i=0;i<e;i++){
        scanf("%d",&v[i]);
    }
    sval=v[0];
    position=0;

    for(i=0;i<e;i++){
        if(sval>v[i]){
            sval=v[i];
            position=i;
        }
    }

    printf("Smallest value : %d\n",sval);
    printf("Position : %d\n",position);
}