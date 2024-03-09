#include<stdio.h>
#include<conio.h>

int main()
{
	int i, j, k;

	for (i = 0; i <9; i++)
	{
		for (j = 0; j <= (2* ((9- i) - 1)); j++)
		{
			printf(" ");
		}

		for (k = 0; k <= i; k++)
		{
			printf(" *");
		}

		printf("\n");
	}
	_getch();
	return 0;

}