#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n=10;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("%d\t%d\t",i,n--);

	}
	getch();
}