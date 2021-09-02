
# include <stdio.h>
# include <conio.h>

void main()
{
	int n,sum=0,rem;
	clrscr();

	printf("\n\tEnter Number :");
	scanf("%d",&n);

	for(int x=0;x<=n;x++)
	{
		sum+= x;
	}

	printf("\n\t 0 to %d: sum is %d",n,sum);

	getch();
}