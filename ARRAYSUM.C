#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],y[5],i,sum=0;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("\n\tEnter Value : ");
		scanf("%d",&x[i]);
	}
	for(i=1;i<=5;i++)
	{
		sum=sum+x[i];
	}
	printf("\n\\nt\tSum = %d",sum);
	getch();
}