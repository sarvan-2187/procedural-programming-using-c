// CH.SC.U4CSE24130
// Program Name: Program String + Function

#include <stdio.h>
#include <string.h>

// Function to concatenate two strings
void concatenateStrings(char *dest, const char *src) {
    strcat(dest, src);
}

// Function to find the length of a string
int getStringLength(const char *str) {
    return strlen(str);
}

// Function to copy a string
void copyString(char *dest, const char *src) {
    strcpy(dest, src);
}

int main(){
printf("CH.SC.U4CSE24130\n");

    char str1[100] = "Hello, ";
    char str2[] = "World!";
    char str3[100];

    printf("Original string 1: %s\n", str1);
    printf("Original string 2: %s\n", str2);

    // Concatenate strings using a function
    concatenateStrings(str1, str2);
    printf("After concatenation: %s\n", str1);

    // Get string length using a function
    int len = getStringLength(str1);
    printf("Length of concatenated string: %d\n", len);

    // Copy string using a function
    copyString(str3, "Copied String.");
    printf("Copied string: %s\n", str3);

    return 0;
}

