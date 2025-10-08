// CH.SC.U4CSE24130
// Program Name: C program that prints "hello" repeatedly in an infinite loop only when the character variable ch is set to 'y'. Initialize ch with any value. You may use a while loop to implement the logic.

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    char ch = 'n'; // Initialize ch with any value

    while (1) { // Infinite loop
        printf("Enter 'y' to print hello, 'n' to stop: ");
        scanf(" %c", &ch); // Note the space before %c to consume any leftover newline characters

        if (ch == 'y' || ch == 'Y') {
            printf("hello\n");
        } else if (ch == 'n' || ch == 'N') {
            printf("Stopping the program.\n");
            break; // Exit the loop
        } else {
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    }

    return 0;
}

