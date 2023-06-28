#include<stdio.h>
#include<conio.h>
void main()
{
	int i,m,n;
	clrscr();
	printf("\n\n\tStarting Value : ");
	scanf("%d",&m);
	printf("\n\tEnding Value : ");
	scanf("%d",&n);
	printf("\n\n");
	for(i=m;i<=n;i++)
	{
		printf("\t%d\t",i++);
	}
	getch();
}