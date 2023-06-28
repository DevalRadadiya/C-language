#include <stdio.h>

void main(){
    int a,b,c;
    printf("Enter A : ");
    scanf("%d",&a);

    printf("Enter B : "); 
    scanf("%d",&b);

    printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n\nEnter Your Choice if you want to calculate : ");
    scanf("%d",&c);

    switch(c) {
        case 1 :
            printf("Addition : %d",a+b);
            break;
        
        case 2 :
            printf("Subtraction : %d",a-b);
            break;
        
        case 3 :
            printf("Multiplication : %d",a*b);
            break;

        case 4 :
            printf("Division : %d",a/b);
            break;

        default :
            printf("Enter Valid Choice");
            break;
    }
}