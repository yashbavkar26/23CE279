#include<stdio.h>
#include<conio.h>

void main()
{
    float a, b, calculate, rem;
    int i;

    printf("Enter the 2 numbers:");
    scanf_s("%f%f", &a, &b);

    printf("1:Addition\n2:Subtraction\n3:Division\n4:Multiplication:\n");
    printf("Enter choice:");
    scanf_s("%d", &i);


    switch (i)
    {
    case 1:
        calculate = a + b;
        printf("%f + %f = %f", a, b, calculate);
        break;

    case 2:
        calculate = a - b;
        printf("%f - %f = %f", a, b, calculate);
        break;

    case 3:
        calculate = a / b;
        printf("%f / %f = %f \n", a, b, calculate);
        break;

    case 4:
        calculate = a * b;
        printf("%f * %f = %f", a, b, calculate);
        break;

    default:
        printf("Invalid input");

    }

    _getch();


}
