/* Write a C program to display multiple variables.
Sample Variables :
a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux  */

#include <stdio.h>

void main(){
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("A + C = %d",a+c);
    printf("\nX + C = %d",x+c);
    printf("\ndx + X = %d",(int)dx+x);
    printf("\n((int)dx + ax) = %d",((int)dx)+ax);
    printf("\nA + X = %d",a+x);
    printf("\nS +B = %d",s+b);
    printf("\nAX + C = %d",ax+c);
    printf("\nAX + UX = %d",ax+ux);
}