CH.SC.U4CSE24130
// Program Name: C program to find out the ASCII value of a character.

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("The ASCII value of %c is %d\n", ch, ch);

    return 0;
}

