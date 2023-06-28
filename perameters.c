#include <stdio.h>

void yourName(char name[],int age){
    printf("\nName : %s\n",name,"\t Age is %d\n",age);
}

int main(){
    printf("Hello");
    yourName("Deval",22);
    return 0;
}