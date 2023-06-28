#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i;
	clrscr();
	printf("\n\tEnter Value : ");
	scanf("%d",&x);
	for(i=1;i<=100;i++)
	{
		if(i==x)
		{
			break;
		}
		printf("\n\t\t%d",i);
	}
	getch();
}