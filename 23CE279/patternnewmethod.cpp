#include<stdio.h>
#include<conio.h>

int main()
{
	int i, j, k;

	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >= i; j--)
		{
			printf(" ");
		}

		for(k=1;k<=((2*i)-1)/2;k++)
		{
			printf("*");
		}

		

		printf("\n");
	}
	_getch();
	return 0;

}