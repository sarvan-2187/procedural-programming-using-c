// CH.SC.U4CSE24130
// Program Name: Function prototype, definition without call

#include <stdio.h>

// Function Prototype (Declaration)
// This tells the compiler about the function's existence, return type, and parameters.
void greetUser(char name[]);

int main(){
printf("CH.SC.U4CSE24130\n");

    printf("This program demonstrates function prototype and definition.\n");
    printf("The 'greetUser' function is prototyped and defined, but not called in main.\n");

    return 0;
}

// Function Definition (Implementation)
// This contains the actual code that the function executes.
void greetUser(char name[]) {
    printf("Hello, %s! Welcome to the program.\n", name);
}

