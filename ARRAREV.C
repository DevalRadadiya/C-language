#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("\n\tEnter Value : ");
		scanf("%d",&x[i]);
	}
	for(i=5;i>=1;i--)
	{
		printf("\n\t%d",x[i]);
	}
	getch();

}