#include<stdio.h>
#include<conio.h>

void pattern()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (i == 1 || i == 5 || j == 1 || j == 5)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}

void main()
{
	pattern();
	_getch();
}