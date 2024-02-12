#include<stdio.h>
#include<conio.h>


void  main()
{
    float r, area, circumference;
    printf("Enter the radius:");
    scanf_s("%f", &r);
    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;

    printf("\nCircumference = %f", circumference);
    printf("\nArea = %f", area);

    _getch();

}
