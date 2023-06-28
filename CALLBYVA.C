#include<stdio.h>
#include<conio.h>
void xyz();
void abc();
void main()
{
	clrscr();
	xyz();
	printf("\n\t 1");
	abc();
	getch();
}
void abc()
{
	printf("\n\t 2");
}
void xyz()
{
	printf("\n\t 3");
}