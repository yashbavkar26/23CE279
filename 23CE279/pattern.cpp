#include<stdio.h>
#include<conio.h>

int main()
{
	int i, j, k;

	for (i = 0; i <10; i++)
	{
		for (j = 1; j <= (2* ((10 - i) - 1)); j++)
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