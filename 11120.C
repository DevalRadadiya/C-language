#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x=1;
	clrscr();
	for(i=10;i>=0;i--)
	{
		printf("%d\t",x);
		x=x+i;
	}
	getch();
}