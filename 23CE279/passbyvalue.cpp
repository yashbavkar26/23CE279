#include<stdio.h>
#include<conio.h>

void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("The swapped values are %d and %d", x, y);
}

void main()
{
	int a, b;
	printf("Enter 2 values:");
	scanf_s("%d%d", &a, &b);
	printf("\nThe values before swap are %d and %d\n", a, b);
	swap(a, b);
	_getch();
}