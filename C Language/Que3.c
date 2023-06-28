/* Write a C program to print a block F using the hash (#), 
where the F has a height of six characters and width of 
five and four characters. And also print a very large 'C'. */

#include <stdio.h>

void main() {
    printf("######");
    printf("\n#");
    printf("\n#");
    printf("\n#####");
    printf("\n#");
    printf("\n#");
    printf("\n#");

    printf("\n\n   ######   ");
    printf("\n ##      ## ");
    for(int i=0;i<=4;i++)
    {
        printf("\n#");
    }
    printf("\n ##      ## ");
    printf("\n   ######   ");
}