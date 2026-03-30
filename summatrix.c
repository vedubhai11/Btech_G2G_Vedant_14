#include<stdio.h>
int main()
{
    int i, j, rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr1[10][10], arr2[10][10], arr3[10][10];
    printf("Enter elements of 1st matrix (%d x %d):\n", rows, cols);
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix  (%d x %d):\n", rows, cols);
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\nThe sum of matrix1 and matrix2 is:\n");
    arr3[i][j]=0;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
