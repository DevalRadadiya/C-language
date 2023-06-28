/* Write a C program to read the coordinates (x, y) (in the Cartesian system) and find the quadrant to which it belongs 
(Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).

Note: A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane by a pair of numerical 
coordinates. These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the signs of the (x,y) coordinates 
are I(+,+), II (−,+), III (−,−), and IV (+,−).*/

#include <stdio.h>

void main(){
    int x,y;
    printf("Enter the Coordenate(x,y) : ");
    printf("\nX : ");
    scanf("%d",&x);
    printf("Y : ");
    scanf("%d",&y);

    if(x > 0 && y > 0){
        printf("Quadrant(+,+)");
    }
    else if(x > 0 && y < 0){
        printf("Quadrant(+,-)");
    }
    else if(x < 0 && y > 0){
        printf("Quadrant(-,+)");
    }
    else if(x < 0 && y < 0){
        printf("Quadrant(-,-)");
    }
}