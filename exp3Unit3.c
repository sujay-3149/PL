#include <stdio.h>

int main() {
    int A[10][10], B[10][10], r, c, i, j;

    printf("Enter rows, columns, matrix A, matrix B:\n");
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", &A[i][j]);
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", &B[i][j]);

    printf("\nA + B:\n");
    for (i = 0; i < r; i++, printf("\n"))
        for (j = 0; j < c; j++) printf("%d\t", A[i][j] + B[i][j]);
    return 0;
}