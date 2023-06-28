// Write a C program to convert specified days into years, weeks and days.

#include<stdio.h>

void main(){
    int days,weeks,years;

    printf("Enter Days : ");
    scanf("%d",&days);

    years = days/365;
    weeks = (days % 365 )/7;
    days=days-((years*365)+(weeks*7));

    printf("Years : %d",years);
    printf("\nWeeks : %d",weeks);
    printf("\nDays : %d",days);
}