// CH.SC.U4CSE24130
// Program Name: Program for function using pointer to string

#include <stdio.h>

// Function that takes a pointer to a string as an argument
void printString(char *str) {
    printf("The string is: %s\n", str);
}

// Function that modifies a string through a pointer
void modifyString(char *str) {
    // Change the first character
    if (str != NULL && *str != '\0') {
        *str = 'H';
    }
}

int main(){
printf("CH.SC.U4CSE24130\n");

    char myString[] = "ello World"; // A modifiable string
    char *anotherString = "Fixed String"; // A string literal, usually not modifiable

    printf("Before modification: ");
    printString(myString);

    modifyString(myString);
    printf("After modification: ");
    printString(myString);

    printf("\nDemonstrating with another string (read-only):\n");
    printString(anotherString);

    return 0;
}

