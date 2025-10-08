// CH.SC.U4CSE24130
// Program Name: Reverse an input number using recursion.

#include <stdio.h>

// Function to reverse a number using recursion
int reverseNumber(int num) {
    static int rev_num = 0;
    static int base_pow = 1;
    if (num > 0) {
        reverseNumber(num / 10);
        rev_num += (num % 10) * base_pow;
        base_pow *= 10;
    }
    return rev_num;
}

int main(){
printf("CH.SC.U4CSE24130\n");

    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    int reversed = reverseNumber(num);
    printf("Reversed number: %d\n", reversed);

    return 0;
}

