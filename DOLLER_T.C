#include<stdio.h>
#include<conio.h>
void main()
{
	int z,rs,dlr;
	clrscr();
	printf("\n\n\tEnter No. of Doller : ");
	scanf("%d",&dlr);
	printf("\n\tEnter No. of Indian Rs : ");
	scanf("%d",&rs);
	z=rs*dlr;
	printf("\n\n\tRS : %d",z);
	getch();
}