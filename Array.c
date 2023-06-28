#include<stdio.h>

int main(){
    //Array
    /*int x[]={1,2,3,4,5};
    printf("%d \n",x[3]);

    //Loop through
    int myNumbers[]={22,25,35,56,67};
    for(int i=0;i<=4;i++)
    {
        printf("\n%d",myNumbers[i]);
    }
    printf("\n");

    //set array size
    int myArray[4];

    myArray[0]=10;
    myArray[1]=20;
    myArray[2]=30;
    myArray[3]=40;

    for(int i=0;i<=3;i++)
    {
        printf("\n MyArray[%d] is : %d",i,myArray[i]);
    }*/

    //Loops through a 2D array

    int matrix={{1,4,2},{3,6,8}};

    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\n",matrix[i][j]);
        }
    }



    return 0;
}
