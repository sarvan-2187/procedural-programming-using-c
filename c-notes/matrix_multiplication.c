// CH.SC.U4CSE24130
// Program Name: C Program to perform matrix multiplication

#include <stdio.h>

#define MAX_SIZE 10 // Maximum size for matrices

int main(){
printf("CH.SC.U4CSE24130\n");

    int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Column of first matrix must be equal to row of second matrix
    if (c1 != r2) {
        printf("Error! Column of first matrix not equal to row of second.\n");
        return 1;
    }

    // Storing elements of first matrix
    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    // Storing elements of second matrix
    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < r2; ++i)
        for (j = 0; j < c2; ++j) {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // Initializing all elements of result matrix to 0
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j) {
            result[i][j] = 0;
        }

    // Multiplying matrices
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
            for (k = 0; k < c1; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the result
    printf("\nProduct of the matrices:\n");
    for (i = 0; i < r1; ++i) {
        for (j = 0; j < c2; ++j) {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

