#include<stdio.h>
#include<conio.h>

int main()
{
    int num = 0;
    printf("Enter the number:");
    scanf_s("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is an even number", num);
    }

    else
        printf("%d is an odd number", num);
        

    _getch();
    return 0;

}
