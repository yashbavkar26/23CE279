#include<stdio.h>
#include<conio.h>

void main()
{                                                                          
	int* ptr1, a, b, * ptr2,c;
	printf("Enter the first number:");
	scanf_s("%d", &a);
	printf("Enter second number:");
	scanf_s("%d", &b);
	ptr1 = &a;
	ptr2 = &b;
	c = *ptr1 + *ptr2;
	printf("%d + %d = %d", *ptr1, *ptr2, c);
	_getch();

}