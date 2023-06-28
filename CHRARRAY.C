#include<stdio.h>
#include<conio.h>
void main()
{
	char x[15];
	clrscr();
	printf("\n\tEnter Name : ");
	scanf("%s",x);
	printf("\n\n\t%c",x[2]);
	getch();
}