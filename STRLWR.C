#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char x[20];
	clrscr();
	printf("\n\tEnter Value : ");
	scanf("%s",x);
	strlwr(x);
	printf("\n\n\t%s",x);
	getch();
}