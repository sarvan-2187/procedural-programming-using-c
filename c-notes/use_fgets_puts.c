// CH.SC.U4CSE24130
// Program Name: Use fgets and puts to print it.

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

char buffer[100];
printf("Enter a string: ");
fgets(buffer, sizeof(buffer), stdin);
printf("You entered: ");
puts(buffer);

return 0;
}

