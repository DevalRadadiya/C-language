#include<stdio.h>
#include<conio.h>
void main()
{
	long int x,rx=0,rm;
	clrscr();
	printf("\n\n\tEnter Value : ");
	scanf("%d",&x);
	while(x!=0)
	{
		rm=x%10;
		x=x/10;
		rx=(rx*10)+rm;
	}
	printf("\n\tReverse Value : %d",rx);
	getch();
}