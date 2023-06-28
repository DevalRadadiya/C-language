/* Write a C program that reads two integers and checks whether they are multiplied or not. */

#include <stdio.h>

void main(){
    int a,b;
    printf("Enter A : "); 
    scanf("%d",&a);
    printf("Enter B : "); 
    scanf("%d",&b);

    if(a>b){
        int temp;
        temp =a;
        a=b;
        b=temp;
    }
    if(b%a==0){
        printf("Multiplyed");
    }
    else{
        printf("Not Multiplyed");
    }
}