// CH.SC.U4CSE24130
// Program Name: C program to reverse a number using array

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int num, originalNum;
    char str_num[20]; // Buffer to hold the number as a string

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Convert integer to string
    sprintf(str_num, "%d", num);

    printf("Original number: %d\n", originalNum);
    printf("Reversed number (using array): ");

    // Print the string in reverse
    for (int i = strlen(str_num) - 1; i >= 0; i--) {
        printf("%c", str_num[i]);
    }
    printf("\n");

    return 0;
}

