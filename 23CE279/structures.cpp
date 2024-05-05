#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

struct student
{
	char name[50];
	int roll;
	float marks;
};

void main()
{
	struct student s[10];
	int i,n;
	printf("Enter the number of students:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter name of student number %d:", i+1);
		scanf("%s", &s[i].name);
		printf("Enter roll number:");
		scanf("%d", &s[i].roll);
		printf("Enter marks obtained by the student:");
		scanf("%f", &s[i].marks);
	}

	printf("\nName				Roll number			Marks:\n");
		for (i = 0; i < n; i++)
		{
			printf("%s				%d				%f\n", s[i].name, s[i].roll, s[i].marks);

         }

		_getch();
}