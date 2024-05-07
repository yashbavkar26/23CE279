#include<stdio.h>
#include<conio.h>

void main()
{
	int key, a[10], m, i, pos = -1;
	printf("Enter the number of elements:");
	scanf_s("%d", &m);
	printf("Enter the elements:");
	for (i = 0; i < m; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("Enter element to be found:");
	scanf_s("%d", &key);
	for (i = 0; i < m; i++)
	{
		if (a[i]==key)
		{
			pos = i;
			break;
		}

	}

	if (pos != -1)
	{
		printf("Element found at index %d", i);
	}

	else
		printf("Element not found");

	

	_getch();

}