#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, j;
    double sum, newmatrix;

    printf("Enter the matrix order: ");
    scanf("%d", &N);

    double matrix[10][10];

    sum = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Element [%d,%d]: ", i, j);
            scanf("%lf", &matrix[i][j]);
        }
    }


    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (matrix[i][j] > 0) {
                sum = sum + matrix[i][j];
            }
        }
    }

    printf("\n");
    printf("Positive numbers sum: %.1lf\n", sum);

    printf("\n");
    printf("Chose 1 line: ");
    scanf("%d", &i);
    for (j = 0; j < N; j++) {
        printf("%.1lf ", matrix[i][j]);
    }
    printf("\n");
    printf("\n");
    printf("Chose 1 column: ");
    scanf("%d", &j);
    for (i = 0; i < N; i++) {
        printf("%.1lf ", matrix[i][j]);
    }

    printf("\n");
    printf("\n");
    printf("Main diagonal: ");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {

        }
        printf("%.1lf ", matrix[i][i]);
    }

    printf("\n");
    printf("\n");
    printf("Altered Matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++){
            if (matrix[i][j] > 0) {
               printf("%.1lf ", matrix[i][j]);
            } else {
              newmatrix = (matrix[i][j] * matrix[i][j]);
              printf("%.1lf ", newmatrix);
            }
        }
        printf("\n");
    }



    return 0;
}
