// Write a C program that read 5 numbers and sum of all odd values between them.

#include <stdio.h>

void main(){
    int num[5],total=0;

    printf("Input the First number : ");
    scanf("%f",&num[0]);
    printf("\nInput the Second number : ");
    scanf("%f",&num[1]);
    printf("\nOutput the Third number : "); 
    scanf("%f",&num[2]);
    printf("\nOutput the Fourth number : ");
    scanf("%f",&num[3]);
    printf("\nOutput the Fifth number : ");
    scanf("%f",&num[4]);

    for(int i=0; i<5;i++){
        if((num[i]%2) != 0){
            total += num[i];
        }
    }
    printf("\nThe sum of Odd values is %d\n", total);
}