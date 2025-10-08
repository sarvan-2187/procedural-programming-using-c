// CH.SC.U4CSE24130
// Program Name: C program to display palindrome numbers in a given range.

#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int reversedNum = 0, remainder, originalNum;
    originalNum = num;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    return originalNum == reversedNum;
}

int main(){
printf("CH.SC.U4CSE24130\n");

    int start_range, end_range;

    printf("Enter the starting number of the range: ");
    scanf("%d", &start_range);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end_range);

    printf("Palindrome numbers between %d and %d are: ", start_range, end_range);
    for (int i = start_range; i <= end_range; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

