#include<stdio.h>
#include<conio.h>


void avg(int a[10],int n)
{
  
	int i,sum=0,avg=0;
	for (i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}

	avg = sum / n;
	printf("Average marks of students is %d", avg);
}

void main()
{
	int a[10], n=0, i;
	printf("Enter the number of students:");
	scanf_s("%d",&n);
	printf("Enter the marks of students:");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d",& a[i]);
	}

	avg(a, n);
	_getch();
}