#include<stdio.h>
#include<conio.h>
main()
{
	int eng=85,ds=68,math=77,total;
	float per;
	clrscr();
	total=eng+ds+math;
	per=(float)(total*300)/100;
	printf("\n\n\tEnglish : %d",eng);
	printf("\n\tData Structure : %d",ds);
	printf("\n\tMaths : %d",math);
	printf("\n\n\tTotal : %d",total);
	printf("\n\tPercentage : %.3f",per);
	if(per>75)
	{
		printf("\n\n\tELIGIBLE");
	}
	else
	{
		printf("\n\n\tNOT ELIGIBLE");
	}
	getch();
	return 0;
}