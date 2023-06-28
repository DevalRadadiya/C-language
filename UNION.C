#include<stdio.h>
#include<conio.h>
void main()
{
	union xyz
	{
		int a;
		char b;
		float c;
	}x;
	clrscr();
	printf("Enter Roll No. : ");
	scanf("%d",&x.a);
	printf("\n\tEnter Name : ");
	scanf("%c",&x.b);
	printf("\n\tEnter Per. : ");
	scanf("%.2f",&x.c);
	printf("\n\n\ta = %d",&x.a);
	printf("\n\n\tb = %s",&x.b);
	printf("\n\n\tc = %.2f",&x.c);
	getch();
}