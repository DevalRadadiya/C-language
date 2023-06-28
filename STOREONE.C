#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],y[10],i=1;
	clrscr();
	for(i=1;i<=10;i++)
	{
		printf("\n\tEnter Value %d : ",i);
		scanf("%d",&x);
	}
	for(i=1;i<=10;i++)
	{
		y[i]=x[i];
	}
	for(i=1;i<=10;i++)
	{
		printf("\t%d",&y[i]);
	}
	getch();
}