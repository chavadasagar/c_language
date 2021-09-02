# include <stdio.h>
# include <conio.h>

void main()
{
	int x,y;
	clrscr();

	printf("\n\tEnter x  value :");
	scanf("%d",&x);

	printf("\n\tEnter y  value :");
	scanf("%d",&y);

	x = x+y;
	y = x-y;
	x = x-y;

	printf("\n\tx = %d",x);
	printf("\n\ty = %d",y);

	getch();

}