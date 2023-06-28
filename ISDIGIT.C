#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	printf("\n\tEnter Name : ");
	scanf("%d",&a);
	if(isdigit(a))
	{
		printf("\n\tIt is a digit");
	}
	else
	{
		printf("\n\tIt is not a digit.");
	}
	getch();
}