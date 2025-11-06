#include <stdio.h>

void inputToValues(int matrix[3][3])
{
    for(int i = 0; i<= 2; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            printf("Enter a%d%d : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void valTo0(int matrix[3][3])
{
    for(int i = 0; i<= 2; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            matrix[i][j] = 0;
        }
    }
}

void printMatrix(int matrix[3][3])
{
    for(int i = 0; i<= 2; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int printMatrixInitial()
{
    char matrix[3][3] = {"aaa","aaa","aaa"};

    for(int i = 0; i<= 2; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            printf("%c%d%d ", matrix[i][j],(i+1),(j+1));
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int matrixA[3][3] ,matrixB[3][3] , matrixSum[3][3], matrixProduct[3][3];
    valTo0(matrixSum);
    valTo0(matrixProduct);
    printMatrixInitial();
    printf("\t\t Matrix 1\n");
    inputToValues(matrixA);
    printf("\t\t Matrix 2\n");
    inputToValues(matrixB);

    for(int i = 0; i<= 2; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            matrixSum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    
    printf("\t\t Matrix 1 \n");
    printMatrix(matrixA);
    printf("\t\t Matrix 2 \n");
    printMatrix(matrixB);
    printf("\t\t Matrix 1 + Matrix 2 \n");
    printMatrix(matrixSum);

    for(int i = 0; i<= 2; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            for(int k = 0; k <= 2; k++)
            {
                matrixProduct[i][j] += matrixA[i][k] * matrixB[k][j] ;
            }
        }
    }

    printf("\t\t Matrix 1 * Matrix 2 \n");
    printMatrix(matrixProduct);
}