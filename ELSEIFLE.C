#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("\n\n\tX : ");
	scanf("%d",&x);
	if(x==0)
	{
		printf("\n\tZ E R O");
	}
	else
	{
		if(x%2==0)
		{
			printf("\n\n\tX is Even");
		}
		else
		{
			printf("\n\n\tX is Odd");
		}
	}
	getch();
}