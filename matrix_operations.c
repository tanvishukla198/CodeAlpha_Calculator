
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int transpose[10][10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    printf("\nMatrix Addition:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of First Matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            transpose[i][j] = a[j][i];
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    if (r == c) {
        int product[10][10] = {0};

        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                for (int k = 0; k < c; k++)
                    product[i][j] += a[i][k] * b[k][j];

        printf("\nMatrix Multiplication:\n");
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++)
                printf("%d ", product[i][j]);
            printf("\n");
        }
    } else {
        printf("\nMultiplication requires square matrices here.\n");
    }

    return 0;
}
