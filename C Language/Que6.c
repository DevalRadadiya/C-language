// Write a C program to compute the perimeter and area of a circle with a given radius

#include <stdio.h>

int main(){
    float p=37.68000,r=113.040001,perimeter,area;
    printf("Parameter : %f",p);
    printf("\nRadius : %f",r);

    perimeter = 2*(p+r);
    area=p*r;

    printf("\nPerimeter is : %.5f",perimeter);
    printf("\nArea is : %.5f",area);

    return 0;
}
