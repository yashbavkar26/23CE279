#include<stdio.h>
#include<conio.h>

void main()
{   
	int n, i=1,multi;



	printf("Enter the number:");
	scanf_s("%d", &n);

	do {
		multi = i * n;
		printf("\n%d * %d = %d", n, i, multi);
		i = i + 1;

	} while (i <= 10);

	_getch();
}