# include <stdio.h>
# include <conio.h>

void main()
{
	int m,n,x,temp=0;
	clrscr();

	printf("\n\tEnter Number :");
	scanf("%d",&n);

	m = n/2;
	for(x=2;x<m;x++)
	{
		if(n%x == 0)
		{
			printf("\n\t%d Number is Not Prime",n);
			temp = 1;
			break;
		}
	}
	if(temp == 0)
	{
		printf("\n\t%d Number is Prime",n);
	}

	getch();
}