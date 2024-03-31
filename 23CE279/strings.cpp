#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[100];
	int a;
	printf("Enter the string:");
	fgets(str,100,stdin);
	printf("\n%s", str);
	a=strlen(str);
	printf("The String length is:%d", a-1);
	_getch();

}