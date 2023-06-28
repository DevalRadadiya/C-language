#include<stdio.h>
#include<conio.h>
void main()
{
	int x,rm;
	clrscr();
	printf("\n\tEnter Value : ");
	scanf("%d",&x);
	printf("\n\n\tReverse Nummber is : ");
	while(x!=0)
	{
		rm=x%10;
		x=x/10;
		printf("\t%d",rm);
	}
	getch();
}