/* Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. 
Determine the perimeter of the triangle if the given values are valid. */

#include <stdio.h>

void main(){
    float x,y,z,P;
    printf("Enter X : ");
    scanf("%f",&x);
    printf("Enter Y : "); 
    scanf("%f",&y);
    printf("Enter Z : ");
    scanf("%f",&z);

    if(x<(y+z) && y<(z+x) && z<(y+x)){
        P=x+y+z;
        printf("Perimetet : %.3f",P);
    }
    else{
        printf("Not Possible");
    }
}