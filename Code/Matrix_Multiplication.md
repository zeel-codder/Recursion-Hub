---
Name: 'Prerana Singh'
Github: 'https://github.com/Prerana-Singh3000'
Problem: 'Multiplication of two matrices'
Description: 'The program uses the concept of recursion to multiply two matrices'
Language: 'C'
---

```C
// Recursive code for Matrix Multiplication
#include <stdio.h>

const int MAX = 100;

void multiplyMatrixRec(int row1, int col1, int A[][MAX],
                       int row2, int col2, int B[][MAX],
                       int C[][MAX])
{
    // i and j are used to know current cell of
    // result matrix C[][]. k is used to know
    // current column number of A[][] and row
    // number of B[][] to be multiplied
    static int i = 0, j = 0, k = 0;

    // If all rows traversed.
    if (i >= row1)
        return;

    // If i < row1
    if (j < col2)
    {
      if (k < col1)
      {
         C[i][j] += A[i][k] * B[k][j];
         k++;

         multiplyMatrixRec(row1, col1, A, row2, col2,
                                               B, C);
      }

      k = 0;
      j++;
      multiplyMatrixRec(row1, col1, A, row2, col2, B, C);
    }

    j = 0;
    i++;
    multiplyMatrixRec(row1, col1, A, row2, col2, B, C);
}

// Function to multiply two matrices A[][] and B[][]

void multiplyMatrix(int row1, int col1, int A[][MAX],
                    int row2, int col2, int B[][MAX])
{
    if (row2 != col1)
    {
        printf("Not Possible\n");
        return;
    }

    int C[MAX][MAX] = {0};

    multiplyMatrixRec(row1, col1, A, row2, col2, B, C);

    // Printing the result

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
            printf("%d  ", C[i][j]);

        printf("\n");
    }
}

// Driven Program

int main()
{
    int A[][MAX] = { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};

    int B[][MAX] = { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9} };

    int row1 = 3, col1 = 3, row2 = 3, col2 = 3;
    multiplyMatrix(row1, col1, A, row2, col2, B);

    return 0;
}
```
