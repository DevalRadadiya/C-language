/*  Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. 
Display a message if it is not possible to find the roots. */

#include <stdio.h>
#include <math.h>

void main(){
    double a,b,c,pr;

    printf("Enter A : ");
    scanf("%lf",&a);
    printf("Enter B : ");
    scanf("%lf",&b);
    printf("Enter C : ");
    scanf("%lf",&c);

    pr=(b*b)-(4*(a)*(c));

    if(pr>0 && a!=0) {
        double x,y;
        pr=sqrt(pr);
        x=(-b+pr)/(2*a);
        y=(-b-pr)/(2*a);


        printf("\nRoot1 = %.2f",x);
        printf("\nRoot2 = %.2f",y);
    }
    else{
        printf("Imposible to find the root");
    }
}