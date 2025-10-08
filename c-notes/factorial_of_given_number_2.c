// CH.SC.U4CSE24130
// Program Name: C Program to find factorial of given number.

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int num, i;
    unsigned long long factorial = 1; // Use unsigned long long for larger factorials

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}

