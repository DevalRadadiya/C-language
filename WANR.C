#include<stdio.h>
#include<conio.h>
void sum(int,int)
void main()
{
	int a=8,b=7;
	clrscr();
	sum(a,b);
	getch();
}
void sum(int a,int b)
{
	int c=a+b;
	printf("\n\n\tX + Y = %d",c);
}