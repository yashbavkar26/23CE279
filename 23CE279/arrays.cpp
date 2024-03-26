#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10], i, j,n;
    printf("Enter the number of columns and rows:");
    scanf_s("%d", &n);
    printf("Enter the elements in the matrix:");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &a[i][j]);
        }
    }
    printf("The original matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("The Transpose matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    _getch();
}