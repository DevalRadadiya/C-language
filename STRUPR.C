#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char x[20];
	clrscr();
	printf("\n\n\tEnter Name : ");
	scanf("%s",x);
	strupr(x);
	printf("\n\n\t%s",x);
	getch();
}