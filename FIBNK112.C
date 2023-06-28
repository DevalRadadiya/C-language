#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x=0,nxt=1,sum;
	clrscr();
	sum=x+nxt;
	for(i=1;i<=10;i++)
	{
		printf("\t%d",x);
		x=nxt;
		nxt=sum;
		sum=x+nxt;
	}
	getch();
}