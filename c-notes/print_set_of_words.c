// CH.SC.U4CSE24130
// Program Name: Program to print set of words

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    // Method 1: Printing individual words
    printf("Word 1: Hello\n");
    printf("Word 2: World\n");
    printf("Word 3: C Programming\n");

    // Method 2: Using an array of strings (array of character pointers)
    char *words[] = {"Apple", "Banana", "Cherry", "Date"};
    int num_words = sizeof(words) / sizeof(words[0]);

    printf("\nPrinting words from an array:\n");
    for (int i = 0; i < num_words; i++) {
        printf("Word %d: %s\n", i + 1, words[i]);
    }

    return 0;
}

