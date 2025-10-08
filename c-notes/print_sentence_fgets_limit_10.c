// CH.SC.U4CSE24130
// Program Name: Print a sentence from user limiting size of fget as 10

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

char sentence[11]; // 10 characters + 1 for null terminator
printf("Enter a sentence (max 10 characters): ");
fgets(sentence, sizeof(sentence), stdin);
printf("You entered: %s", sentence);

return 0;
}

