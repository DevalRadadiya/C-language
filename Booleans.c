#include<stdio.h>
#include<stdbool.h>

int main(){
    bool isProgrammingFun=true;
    bool isFishTesty=false;

    printf("%d", isProgrammingFun);
    printf("\n%d", isFishTesty);

    printf("\n\n%d",10>9);

    printf("\n\n\n");
    int myAge=22;
    int votingAge=18;
    //printf("%d",myAge>=votingAge);
    if(myAge>=votingAge){
        printf("Age enough to vote");
    }
    else{
        printf("Age not enough to vote");
    }
    return 0;
}
