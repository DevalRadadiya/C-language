#include<stdio.h>
#include<conio.h>
void main()
{
	union xyz
	{
		int a[3];
		char b[5];
		float c[2];
	}x;
	int z;
	clrscr();
	z=sizeof(x);
	printf("\n\tTotal Size : %d",z);
	getch();
}