// CH.SC.U4CSE24130
// Program Name: Print a sentence from user using fgets

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

char sentence[256];
printf("Enter a sentence: ");
// Read a line of text, including spaces, up to 255 characters or newline
fgets(sentence, sizeof(sentence), stdin);
printf("You entered: %s", sentence);

return 0;
}

