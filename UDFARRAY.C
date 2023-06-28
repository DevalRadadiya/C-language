#include<stdio.h>
#include<conio.h>
void xyz(int[]);
void main()
{
	int x[5],i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("\n\tEnter Value %d : ",i);
		scanf("%d",&x[i]);
	}
	xyz(x);
	getch();
}
void xyz(int x[])
{
	int j;
	for(j=1;j<=5;j++)
	{
		printf("\n\t%d",x[j]);
	}
}