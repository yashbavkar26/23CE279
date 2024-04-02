#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[100], str2[100];
	printf("Enter your first name:");
	scanf("%s", str1);
	printf("Enter your last name:");
	scanf("%s", str2);
	printf("Your full name is %s", strcat(str1, str2));
	_getch();


}
