#include<stdio.h>
#include<conio.h>

void main()
{
	int* ptr1, a, b, * ptr2;
	printf("Enter the first number:");
	scanf_s("%d", &a);
	printf("Enter second number:");
	scanf_s("%d", &b);
	ptr1 = &a;
	ptr2 = &b;
	printf("Values before swap are %d and %d", *ptr1,*ptr2);
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
	printf("\nValues after swap are %d and %d", *ptr1, *ptr2);
	_getch();
}