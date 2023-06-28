#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n\tEnter Value %d : ",i);
		scanf("%d",&x[i]);
	}
	printf("\n\n\t%d",x[3]);
	getch();
}