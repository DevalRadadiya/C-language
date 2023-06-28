#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char x[20],y[20];
	int z;
	clrscr();
	printf("\n\n\tEnter Name X : ");
	scanf("%s",x);
	printf("\n\n\tEnter Name Y: ");
	scanf("%s",y);
	z=strcmp(x,y);
	printf("\n\n\t%d",z);
	getch();
}