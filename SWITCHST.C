#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,z;
	clrscr();
	printf("\n\n\t[1] Addition");
	printf("\n\t[2] Subtraction");
	printf("\n\t[3] Multiplication");
	printf("\n\t[4] Division");
	printf("\n\n\tEnter Your Choice(1 to 4) : ");
	scanf("%d",%z);
	printf("\n\n\tEnter A : ");
	scanf("%d",%a);
	printf("\n\tEnter B : ");
	scanf("%d",&b);
	switch(z)
	{
		case 1 :
			c=a+b;
			printf("\n\tA + B = %d",c);
			break;
		case 2 :
			c=a-b;
			printf("\n\tA - B = %d",c);
			break;
		case 2 :
			c=a*b;
			printf("\n\tA * B = %d",c);
			break;
		case 2 :
			c=a/b;
			printf("\n\tA / B = %d",c);
			break;
		default :
			printf("\n\n\tInvalid Choice Please Try Again.");
	}
	getch();
}