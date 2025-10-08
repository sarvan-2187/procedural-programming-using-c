// CH.SC.U4CSE24130
// Program Name: C Program to calculate the sum of first n terms of the series:x+3x+5x+...+n(Hint:x(1+3+5+...+n odd number))

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int x, n;
    long long sum_of_odd_numbers = 0;
    long long total_sum;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the upper limit for the odd numbers (n, must be an odd number): ");
    scanf("%d", &n);

    if (n <= 0 || n % 2 == 0) {
        printf("Please enter a positive odd number for n.\n");
        return 1;
    }

    // Calculate the sum of odd numbers from 1 to n
    // The sum of the first k odd numbers is k*k
    // If n is the k-th odd number, then n = 2k - 1, so k = (n + 1) / 2
    int k = (n + 1) / 2;
    sum_of_odd_numbers = (long long)k * k;

    // Calculate the total sum of the series
    total_sum = (long long)x * sum_of_odd_numbers;

    printf("The sum of the series for x=%d and n=%d is: %lld\n", x, n, total_sum);

    return 0;
}

