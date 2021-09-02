# include <stdio.h>
# include <conio.h>

void main()
{
	int n,x,fec=1;
	clrscr();

	printf("\n\tEnter Number :");
	scanf("%d",&n);

	for(x=1;x<=n;x++)
	{

		fec=fec*x;
	}

	printf("\n\t%d is fectorial",fec);

	getch();
}