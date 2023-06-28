#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("\n\n\tX = ");
	scanf("%d",&x);
	printf("\n\tY = ");
	scanf("%d",&y);
	if(x>y)
	{
		printf("\n\n\tX is Big..");
	}
	else
	{
		printf("\n\n\tY is Big");
	}
	getch();
}