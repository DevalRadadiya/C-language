#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,a;
	clrscr();
	printf("\n\n\tEnter No. of Table : ");
	scanf("%d",&a);
	while(i<=10)
	{
		printf("\n\t\t%d  *  %d =  %d",a,i,a*i);
		i++;
	}
	getch();
}