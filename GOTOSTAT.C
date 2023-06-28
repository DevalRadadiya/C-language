#include<stdio.h>
#include<conio.h>
void main()
{
	int x=1;
	clrscr();
	xyz:
	printf("\n\t[%d]",x);
	x=x+1;
	goto xyz;
	getch();
}