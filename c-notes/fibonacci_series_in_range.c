// CH.SC.U4CSE24130
// Program Name: C program to print Fibonacci series in a given range.

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int start_range, end_range;
    int a = 0, b = 1, nextTerm;

    printf("Enter the starting number of the range: ");
    scanf("%d", &start_range);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end_range);

    printf("Fibonacci series in the range [%d, %d]:\n", start_range, end_range);

    // Handle initial terms
    if (start_range <= 0 && end_range >= 0) {
        printf("0 ");
    }
    if (start_range <= 1 && end_range >= 1) {
        printf("1 ");
    }

    // Generate Fibonacci series
    while (b <= end_range) {
        nextTerm = a + b;
        if (nextTerm >= start_range && nextTerm <= end_range) {
            printf("%d ", nextTerm);
        }
        a = b;
        b = nextTerm;
        if (nextTerm > end_range) break; // Optimization to stop early
    }
    printf("\n");

    return 0;
}

