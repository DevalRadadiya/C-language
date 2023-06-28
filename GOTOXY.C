#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("\n\tEnter X : ");
	printf("\n\tEnter Y : ");
	printf("\n\tEnter Z : ");
	goto xy(19,2);
	scanf("%d",&x);
	goto xy(19,3);
	scanf("%d",&y);
	goto xy(19,4);
	scanf("%d",&z);
	getch();
}