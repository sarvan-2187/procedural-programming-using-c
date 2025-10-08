// CH.SC.U4CSE24130
// Program Name: Write a program to find sum of n natural numbers using recursion

#include <stdio.h>

// Recursive function to find the sum of natural numbers
int sumNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumNaturalNumbers(n - 1);
    }
}

int main(){
printf("CH.SC.U4CSE24130\n");

    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = sumNaturalNumbers(n);
        printf("Sum of first %d natural numbers = %d\n", n, sum);
    }

    return 0;
}

