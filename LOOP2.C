#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x;
	clrscr();
	for(i=1;i<=10;i++)
	{
		printf("%d\t",i);
	}
	printf("\n\n");
	for(x=10;x>=1;x--)
	{
		printf("%d\t",x);
	}
	getch();
}