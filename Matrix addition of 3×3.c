#include <stdio.h>

int main() 
{
    int matrix1[3][3], matrix2[3][3], sum[3][3];
    int i, j;
    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("\nSum of the two matrices is:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%4d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
