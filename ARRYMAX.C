#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],i,max=0,n=1;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("\n\tEnter Value %d : ",n);
		scanf("%d",&x[i]);
		n++;
	}
	for(i=1;i<=5;i++)
	{
		if(max<x[i])
		{
			max=x[i];
		}
	}
	printf("\n\n\t\tMaximum value : %d",max);
	getch();
}