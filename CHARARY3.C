#include<stdio.h>
#include<conio.h>
void main()
{
	char x[15];
	int i;
	clrscr();
	printf("\n\tEnter Name : ");
	scanf("%s",x);
	for(i=1;i<=5;i++)
	{
		printf("\n\t%c",x[2]);
		printf("\n\t\t%d",i);
	}
	getch();
}