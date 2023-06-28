/*Write a C program to read a password until it is valid. For wrong password print "Incorrect password" and for correct password print, 
  "Correct password" and quit the program. The correct password is 1234.*/

  #include <stdio.h>

  void main(){
    int pass,x=10;
    while (x!=0)
    {
        printf("\nEnter password : ");
        scanf("%d",&pass);
    
        if(pass==1234){
            printf("Correct password");
            x=0;
        }
        else{
            printf("Invalid password,Please try again.");
        }
    }
    
  }