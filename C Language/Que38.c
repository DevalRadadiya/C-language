/*Write a program that reads two numbers and divides the first number by the second number. 
  If division is not possible print "Division is not possible".*/

  #include <stdio.h>

  void main(){
    int x,y;
    float div_result;
    printf("Enter First Number : ");
    scanf("%d",&x);
    printf("Enter Second Number : ");
    scanf("%d",&y);

    if(y!=0){
        div_result=x/y;
        printf("Division is : %.2f",div_result);
    }
    else{
        printf("Division is not possible");
    }
}