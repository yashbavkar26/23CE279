#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10][10], b[10][10], c[10][10], i, j, k, m, n, p;
	printf("Enter the number of rows and columns in first array:");
	scanf_s("%d%d", &m, &n);
	printf("Enter the number of columns in 2nd array:");
	scanf_s("%d", &p);
	printf("Eneter elements in 1st array:");

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	printf("Enter elements of second array:");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < p; j++)
		{
			scanf_s("%d", &b[i][j]);
		}
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			c[i][j] = 0;
		}
	}

	printf("The multiplication of 2 arrays is:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < p; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	} 

		for (i = 0; i < m; i++)
		{
			for (j = 0; j < p; j++)
			{
				printf("%d ", c[i][j]);
			}
			printf("\n");
	     
		}
	_getch();

}