#include<stdio.h>
#include<conio.h>
void main()
{
	int i,x,y;
	clrscr();
	printf("\n\n\tEnter Starting value : ");
	scanf("%d",&x);
	printf("\n\tEnter Ending value : ");
	scanf("%d",&y);
	for(i=x;i<=y;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
	getch();
}