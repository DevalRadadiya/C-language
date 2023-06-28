#include<stdio.h>
#include<conio.h>
void main()
{
	int x[3][4],i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("\n\tStudent %d\n",i);
		for(j=1;j<=5;j++)
		{
			printf("\n\tSubject %d : ",j);
			scanf("%d",&x[i][j]);
		}
	}
	for(i=1;i<=5;i++)
	{
		printf("\n\n\tStudent %d : ",i);
	}
	getch();
}