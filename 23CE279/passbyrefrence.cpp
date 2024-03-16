#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void main()
{
	int a, b;
	printf("Enter 2 values:");
	scanf_s("%d%d", &a, &b);
	printf("\nThe values before swap are %d and %d\n", a, b);
	swap(&a, &b);
	printf("The values after swap are %d and %d", a, b);
	_getch();

}