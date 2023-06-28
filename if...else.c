#include<stdio.h>

int main() {
   /* int time=7;
    if(time<10){
        printf("Good Morning..");
    }
    else if(time<20){
        printf("Good Day..");
    }
    else{
        printf("Good Evening..");
    }   */


    //This example shows how you can use if..else to find out if a number is positive or negative:
    int myNum=-10;

    if(myNum>0)
    {
        printf("The value is Positive..");
    }
    else
    {
        printf("The value is Nagative..");
    }

    printf("\n\n-----------------------");

    int time=20;
    (time<18) ? printf("\nGood Day..") : printf("\nGood Evening..");


    return 0;
}
