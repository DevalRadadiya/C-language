#include<stdio.h>
#include<conio.h>
int xyx(int);
void main()
{
	int x,z;
	clrscr();
	printf("\n\tEnter Value : ");
	scanf("%d",&x);
	z=xyz(x);
	printf("\n\tTotal Sum : %d",z);
	getch();
}
int xyz(int x)
{
	if(x==0)
	{
		return 0;
	}
	else if(x==1)
	{
		return 1;
	}
	else
	{
		return x+(xyz(x-1));
	}
}