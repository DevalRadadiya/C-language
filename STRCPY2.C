#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char x[3][20];
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("\n\tEnter Name : ");
		scanf("%s",x[i]);
	}
	printf("\n\t===============");
	for(i=0;i<3;i++)
	{
		printf("\n\n\t%s",x[i]);
	}
	getch();
}