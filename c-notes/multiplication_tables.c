// CH.SC.U4CSE24130
// Program Name: Write a C program to print the multiplication tables from 1 to n, each up to 10, based on user input.

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int n;

    printf("Enter a positive integer (n) to print multiplication tables up to n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("\nMultiplication Table for %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}

