#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char x[15];
	int i,j,ln;
	clrscr();
	printf("\n\tEnter Name : ");
	scanf("%s",x);
	ln=strlen(x);
	printf("\n\n\t%d",ln);
	getch();
}