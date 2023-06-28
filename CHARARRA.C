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
	for(i=0;i<ln;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("\t%c",x[j]);
		}
		printf("\n");
	}
	getch();
}