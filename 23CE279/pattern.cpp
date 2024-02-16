#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j, k, m = 0;

	for (i = 10; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}

		for (k = 1; k <= m; k++)
		{
			printf("*");
		}
		printf("\n");
		m++;
	}
	_getch();

}