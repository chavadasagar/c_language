# include <stdio.h>
# include <conio.h>

void main()
{
	int rem,rev=0,n,temp_no;
	clrscr();

	printf("\n\tEnmter Number :");
	scanf("%d",&n);

	temp_no = n;

	while(n>0)
	{
		rem = n%10;
		rev = (rev*10)+rem;
		n = n/10;
	}

	printf("\n\tNumber is [%d] and Reverse Number is [%d]",temp_no,rev);

	if(temp_no == rev)
	{
		printf("\n\n\t%d it is Pelindrome Number",temp_no);
	}
	else
	{
		printf("\n\n\t%d is Pelindrome Number",temp_no);
	}


	getch();
}
