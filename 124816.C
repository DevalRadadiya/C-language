#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n=1;
	clrscr();
	for(i=1;i<=20;i++)
	{
		printf("%d\t",n);
		n=n*2;
	}
	getch();
}