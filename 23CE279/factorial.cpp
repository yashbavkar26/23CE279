#include<stdio.h>
#include<conio.h>

int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n*fact(n - 1);
}

void main()
{
	printf("Enter n:");
	int n;
	scanf_s("%d", &n);

	printf("Factorial of %d is %d", n, fact(n));
	_getch();
}
