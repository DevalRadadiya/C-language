#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x,fact=1;
	clrscr();
	printf("\n\tEnter Value : ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	printf("\n\n\tFactorial is %d",fact);
	getch();
}