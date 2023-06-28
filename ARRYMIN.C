#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i,min,max=0,n=1;
	clrscr();
	for(i=0;i<=9;i++)
	{
		printf("\n\tEnter Value %d : ",n++);
		scanf("%d",&x[i]);
	}
	for(i=1;i<=10;i++)
	{
		if(max<x[i])
		{
			max=x[i];
		}
	}
	min=max;
	for(i=1;i<=10;i++)
	{
		if(min>x[i])
		{
			min=x[i];
		}
	}
	printf("\n\n\tMinimum Value : %d",min);
	getch();
}