#include<stdio.h>
#include<conio.h>
void main()
{
	int x=3,y,z;
	clrscr();
	z=xyz(x);
	printf("%d",z);
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
		return x*(xyz-1);
	}
}