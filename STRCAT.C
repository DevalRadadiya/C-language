#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char x[20],y[20];
	clrscr();
	printf("\n\n\tEnter Name X : ");
	scanf("%s",x);
	printf("\n\n\tEnter Name Y: ");
	scanf("%s",y);
	strcat(x,y);
	printf("\n\n\tX = %s",x);
	printf("\n\n\tY = %s",y);
	getch();
}