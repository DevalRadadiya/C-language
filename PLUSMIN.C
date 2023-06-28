#include<stdio.h>
#include<conio.h>
void main()
{
	int x=15;
	clrscr();
	printf("\n\n\t%d",++x);  // 16
	printf("\n\t%d",x++);    //16
	printf("\n\t%d",++x);    //18
	printf("\n\t%d",--x);	//17
	printf("\n\t%d",x--);	//17
	printf("\n\t%d",++x);	//17
	getch();
}