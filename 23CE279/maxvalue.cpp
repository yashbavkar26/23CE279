#include<stdio.h>
#include<conio.h>

void max(int a[10], int n)
{
	int i,max=a[0];
	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	printf("The maximum number is %d", max);

}

void main()
{
	int i, n, a[10];
	printf("Enter the number of terms:");
	scanf_s("%d", &n);
	printf("Enter the elements:");
	for (i = 0; i < n;i++)
	{
		scanf_s("%d", &a[i]);
	}
	max(a, n);
	_getch();
}