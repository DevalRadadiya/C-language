//  Write a C program to calculate the distance between two points.

#include <stdio.h>
#include <math.h>

void main(){
    int x1,y1,x2,y2,distance;

    printf("Enter X1 : ");
    scanf("%d",&x1);

    printf("Enter Y1 : ");
    scanf("%d",&y1);

    printf("Enter X2 : ");
    scanf("%d",&x2);

    printf("Enter Y2 : ");
    scanf("%d",&y2);

    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    printf("\nDistance between the said point : ",sqrt(distance));
}