#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],i;
	clrscr();
	for(i=0;i<=4;i++)
	{
		printf("\n\tEnter Value : ");
		scanf("%d",&x[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("\n\t\t%d",x[i]);
	}
	getch();
}