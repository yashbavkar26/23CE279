#include<stdio.h>
#include<conio.h>

void sum_of_digits(int n)
{
	int sum = 0, rem,temp;
	temp = n;

	while (n != 0)
	{
		rem = n % 10;
		sum = sum + rem;
		n = n / 10;
	}
	printf("The sum of digits of the number %d is %d", temp, sum);
}

void main()
{   
	int a;
	printf("Enter the number:");
	scanf_s("%d", &a);
	sum_of_digits(a);
	_getch();

}