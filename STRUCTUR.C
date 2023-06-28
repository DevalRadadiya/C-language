#include<stdio.h>
#include<conio.h>
void main()
{
	struct xyz
	{
		int rn;
		float per;
		char nm[10];
	}x;
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n\tEnter Roll no. : ");
		scanf("%d",x.rn);
		printf("\n\tEnter Roll percentsge : ");
		scanf("%.3f",x.per);
		printf("\n\tEnter Name : ");
		scanf("%s",x.nm);
	}
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n\n\tRoll no. : %d",x.rn);
		printf("\n\tPercentage : .3f",x.per);
		printf("\n\tName : %s",x.nm);
	}
	getch();
}