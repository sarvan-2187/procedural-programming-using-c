// CH.SC.U4CSE24130
// Program Name: C Program to convert upper case to lower case

#include <stdio.h>
#include <ctype.h> // For tolower() function

int main(){
printf("CH.SC.U4CSE24130\n");

    char ch;

    printf("Enter an uppercase character: ");
    scanf("%c", &ch);

    // Convert to lowercase using tolower() function
    char lower_ch = tolower(ch);

    printf("Original character: %c\n", ch);
    printf("Lowercase character: %c\n", lower_ch);

    return 0;
}

