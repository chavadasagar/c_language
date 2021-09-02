# include <stdio.h>
# include <conio.h>

void main()
{
	int rem,rev=0,n;
	clrscr();

	printf("\n\tEnter Number :");
	scanf("%d",&n);

	while(n>0)
	{
		rem = n%10;
		rev = rev*10+rem;
		n = n/10;
	}

	printf("\n\tReverse no is %d",rev);

	getch();

}