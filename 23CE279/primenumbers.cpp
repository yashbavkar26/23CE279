#include<stdio.h>
#include<conio.h>

void main()
{
	int count, i, num = 1;

	while (num <= 100)
	{
		count = 0;
		i = 2;
		while (i <= num / 2)
		{
			if (num % i == 0)
			{
				count++;
				break;
			}

			i++;

		}

		if (count == 0 && num != 1)
		{
			printf("%d ", num);
		}

		num++;
	}

	_getch();


	
}