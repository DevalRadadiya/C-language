//  Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.

#include <stdio.h>

void main(){
    int amt,total;

    printf("Enter Amount : ");
    scanf("%d",&amt);


    printf("There are ");

    total=(int)amt/100;
    printf("\n%d notes of 100",total);
    amt=amt-(total*100);

    total=(int)amt/50;
    printf("\n%d notes of 50",total);
    amt=amt-(total*50);

    total=(int)amt/20;
    printf("\n%d notes of 20",total);
    amt=amt-(total*20);

    total=(int)amt/10;
    printf("\n%d notes of 10",total);
    amt=amt-(total*10);

    total=(int)amt/5;
    printf("\n%d notes of 5",total);
    amt=amt-(total*5);

    total=(int)amt/2;
    printf("\n%d notes of 2",total);
    amt=amt-(total*2);

    total=(int)amt/1;
    printf("\n%d notes of 1",total);
    amt=amt/(total*1);

}