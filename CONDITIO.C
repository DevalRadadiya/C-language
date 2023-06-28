#include<stdio.h>
#include<conio.h>
void main()
{
	int x=7,y=10;
	clrscr();
	if(x==y)
	{
		printf("\n\n\tBoth are Equal");
	}
	else
	{
		if(x>y)
		{
			printf("\n\n\tX is big");
		}
		else
		{
			printf("\n\n\tY is big");
		}
	}
	getch();
}