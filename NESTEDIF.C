#include<stdio.h>
#include<conio.h>
void main()
{
	int per;
	clrscr();
	printf("\n\n\tEnter Per. : ");
	scanf("%d",&per);
	if(per>=80)
	{
		printf("\n\n\tDist.");
	}
	else
	{
		if(per>=60)
		{
			printf("\n\n\tFirst class.");
		}
		else
		{
			if(per>=45)
			{
				printf("\n\n\tSecond Class.");
			}
			else
			{
				printf("\n\n\tPass Class.");
			}

		}
	}
	getch();
}