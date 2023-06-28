// Write a C program that reads 5 numbers and sums all odd values between them.

#include <stdio.h>

void main(){
    int n[5],total=0;

    printf("Input the First number : ");
    scanf("%d",&n[0]);
    printf("Output the Second number : ");
    scanf("%d",&n[1]);
    printf("Output the Third number : ");
    scanf("%d",&n[2]);
    printf("Output the Fourth number : ");
    scanf("%d",&n[3]);
    printf("Output the Fifth number : ");
    scanf("%d",&n[4]);

    for(int i=0;i<=4;i++){
        if(n[i]%2 !=0){
            total += n[i];
        }
    }
    printf("\nSum of all odd Values : %d",total);
}