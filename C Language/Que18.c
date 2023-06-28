/* Write a C program to convert a given integer (in days) to years, months and days, 
assuming that all months have 30 days and all years have 365 days. */

#include <stdio.h>

void main(){
    int days,months,years;

    printf("Enter days : ");
    scanf("%d",&days);

    years = days/365;
    days = days-(365*years);
    months = days/30;
    days = days-(months*30);

    printf("%d days, %d months, %d years", days,months,years);

}