// CH.SC.U4CSE24130
// Program Name: Program for printing the sum of column and sum of rows for the array: {8 3 9 0 10} {3 5 17 1 1} {2 8 6 23 1} {15 7 3 2 9} {6 1 4 2 6 0}

#include <stdio.h>

#define ROWS 5
#define COLS 5

int main(){
printf("CH.SC.U4CSE24130\n");

    int matrix[ROWS][COLS] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 1, 4, 2, 6}
    };

    int row_sum[ROWS] = {0};
    int col_sum[COLS] = {0};

    printf("Given Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate row sums
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            row_sum[i] += matrix[i][j];
        }
    }

    // Calculate column sums
    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i < ROWS; i++) {
            col_sum[j] += matrix[i][j];
        }
    }

    printf("\nSum of Rows:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: %d\n", i + 1, row_sum[i]);
    }

    printf("\nSum of Columns:\n");
    for (int j = 0; j < COLS; j++) {
        printf("Column %d: %d\n", j + 1, col_sum[j]);
    }

    return 0;
}

