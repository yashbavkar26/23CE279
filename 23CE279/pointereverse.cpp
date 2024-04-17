#include<stdio.h>
#include<conio.h>

void main()
{
	int* rev, rev1 = 0, * rem, rem1, n, * p1;
	rem = &rem1;
	rev = &rev1;
	printf("Enter the number:");
	scanf_s("%d", &n);
	p1 = &n;
	printf("The original number is %d\n", *p1);
	
	while (n > 0)
	{
		*rem = *p1 % 10;
		*rev = *rev * 10 + *rem;
		*p1 = *p1 / 10;
	}

	printf("The Reversed number is %d", *rev);
	_getch();
}