// CH.SC.U4CSE24130
// Program Name: C program to find sum of first n natural numbers.

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}

