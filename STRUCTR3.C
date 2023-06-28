#include<stdio.h>
#include<conio.h>
void main()
{
	struct xyz
	{
		int a;
		char b;
		float c;
	}x;
	clrscr();
	printf("\n\tEnter Value : ");
	scanf("%d",&x.a);
	printf("\n\tEnter Char : ");
	scanf("%d",&x.b);
	flushall();
	printf("\n\tEnter Per. : ");
	scanf("%f",&x.c);
	printf("\n\tA : %d",x.a);
	getch();
}