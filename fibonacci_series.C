# include <stdio.h>
# include <conio.h>

void main()
{
	int n1=0,n2=1,n3,n,x;
	clrscr();

	printf("\n\tEnter Number :");
	scanf("%d",&n);


	printf("%d %d",n1,n2);
	for(x=1;x<n;x++)
	{
		n3=n1+n2;
		printf("\t%d",n3);

		n1=n2;
		n2=n3;
	}

	getch();
}