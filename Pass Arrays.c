#include <stdio.h>

// void myFunction(int myArray[]){
//     for (int i=0; i<5; i++) {
//         printf("myArray[%d] = %d\n", i, myArray[i]);
//     }
// }

// void main(){
//     int myArray[]={10,20,30,40,50};
//     myFunction(myArray);

int myFunction(int a,int b){
    return a+b;
}

int main(){
    int a,b,sum;
    printf("Sum is : %d",myFunction(5,3));
}