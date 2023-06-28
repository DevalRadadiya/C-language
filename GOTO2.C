#include<stdio.h>
#include<conio.h>
void main()
{
	int x=0;
	clrscr();
	xyz :
	printf("\n\n\t[%d]",x);
	x=x+1;
	if(x<=5)
	{
		goto xyz;
	}
	getch();
}