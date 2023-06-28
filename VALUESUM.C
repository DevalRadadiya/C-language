#include<stdio.h>
#include<conio.h>
main()
{
	int x,rm,sum=0;
	clrscr();
	printf("\n\n\tEnter Value : ");
	scanf("%d",&x);
	while(x!=0)
	{
		rm=x%10;
		x=x/10;
		sum=sum+rm;
	}
	printf("\n\n\tSum = %d",sum);
	getch();
}
