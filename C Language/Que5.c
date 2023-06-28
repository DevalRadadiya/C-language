// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.

#include <stdio.h>

int main(){
    float h,w,perimeter,area;
    printf("Enter Height : ");
    scanf("%f",&h);

    printf("Enter Width : ");
    scanf("%f",&w);

    perimeter = 2*(h+w);
    area=h*w;

    printf("\nPerimeter is : %.5f",perimeter);
    printf("\nArea is : %.5f",area);

    return 0;
}