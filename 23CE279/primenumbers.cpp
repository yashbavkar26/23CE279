#include<stdio.h>
#include<conio.h>

void main()
{
	int count, i ,j,n;
	printf("enter n:");
	scanf_s("%d", &n);
	printf("The prime numbers are:");
	i = 1;
	while(i<=n)
	{
		count = 0;
		j = 1;
		while(j<=i)
		{
			if (i % j == 0)
			{
				count += 1;
			}
			j += 1;
		}

		if (count == 2)
		{
			printf(" %d", i);
		}
		i += 1;
	}
	


	_getch();


	
}