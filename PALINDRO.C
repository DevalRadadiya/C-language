#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[15],b[15];
	int x;
	clrscr();
	printf("\n\tEnter Name : ");
	scanf("%d",a);
	gets(a);
	strcpy(b,a);
	strrev(a);
	x=strcmp(b,a);
	if(x==0)
	{
		printf("\n\t%s given string is palindrom");
	}
	else
	{
		printf("\n\t%s given string isnot palindrom");
	}
	getch();
}