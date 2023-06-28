#include <stdio.h>

void main(){
    // create a file
    FILE *file;
    // file=fopen("c_text.txt","a");

    // // Write a file
    // fprintf(file,"\nHello Deval Radadiya \nNow, you learning C code");

    // Read a file
    file=fopen("c_text.txt","r");

    char myString[100];
    fgets(myString, 100, file);
    printf("%s",myString);

    fclose(file);
    
}
