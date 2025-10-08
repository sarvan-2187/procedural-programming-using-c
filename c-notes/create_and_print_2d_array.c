// CH.SC.U4CSE24130
// Program Name: C program to create a 2-dimensional array and it should print output: 1 2 3 4

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int matrix[2][2] = {{1, 2}, {3, 4}};

    printf("Output of the 2D array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");

    return 0;
}

