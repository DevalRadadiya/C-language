// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

#include <stdio.h>

void main() {
    int seconds,h,m,s;

    printf("Enter seconds : ");
    scanf("%d", &seconds);

    h=(seconds/3600);
    m=(seconds-(3600*h))/60;
    s=(seconds-(3600*h)-(m*60));

    printf("\nHours : Minutes : seconds = %d : %d : %d",h,m,s);
}