#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char x[20];
	int z;
	clrscr();
	printf("\n\n\tEnter Name : ");
	scanf("%s",x);
	z=strlen(x);
	printf("\n\n\t%d",z);
	getch();
}