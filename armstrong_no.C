#include <stdio.h>
# include <conio.h>

void main()
{
	int rem,sum=0,n,temp_no;
	clrscr();

	printf("\n\tEnter Number :");
	scanf("%d",&n);

	temp_no = n;
	while(n>0)
	{
		rem = n%10;
		sum = sum+(rem*rem*rem);
		n = n/10;
	}


	if(temp_no == n)
	{
		printf("\n\t%d is Armstrong Number",temp_no);
	}
	else
	{
		printf("\n\t%d Is Not Armstrong Number",temp_no);

	}



	getch();
}