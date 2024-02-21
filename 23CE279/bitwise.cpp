#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 24;
	int b = 30;
    
	printf(" %d & %d = %d", a, b, a & b);
	printf("\n %d | %d = %d", a, b, a | b);
	printf("\n %d ^ %d = %d", a, b, a ^ b);
	printf("\n ~%d = %d", a, ~a);
	printf("\n ~%d = %d", b, ~b);
	printf("\n %d << 2 = %d", a, a << 2);
	printf("\n %d >> 2 = %d", a, a >> 2);
	printf("\n %d << 2 = %d", b, b << 2);
	printf("\n %d >> 2 = %d", b, b >> 2);

	_getch();
	
}

