// CH.SC.U4CSE24130
// Program Name: Program using go to statement

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

int num = 1;

start:
printf("Current number: %d\n", num);
num++;

if (num <= 5) {
    goto start; // Jump back to the 'start' label
}

printf("Loop finished.\n");

return 0;
}

