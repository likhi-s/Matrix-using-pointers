#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of cols: ");
    scanf("%d", &cols);

    int *p = (int *)malloc(rows * cols * sizeof(int ));


    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("p[%d][%d] = ", i, j);
            scanf("%d", &p[i*cols+j]);
        }
    }

    printf("Matrix for the given elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", p[i*cols+j]);
        }
        printf("\n");
    }

    free(p);

    return 0;
}

