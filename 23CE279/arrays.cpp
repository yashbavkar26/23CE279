#include<stdio.h>
#include<conio.h>

void main()
{
    int a[100][100], i, j,m,n;
    printf("Enter the number of rows:");
    scanf_s("%d", &m);
    printf("Enter the number of columns:");//n*m m*n
    scanf_s("%d", &n);
    printf("Enter the elements in the matrix:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf_s("%d", &a[i][j]);
        }
    }
    printf("The original matrix is:\n");
    for (i = 0; i < m; i++)
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
        for (j = 0; j < m; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    _getch();
}