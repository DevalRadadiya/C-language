#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("   ");
		}
		for(k=5;k>=i;k--)
		{
			printf("   %d  ",k);
		}
		printf("\n");
	}
	getch();
}