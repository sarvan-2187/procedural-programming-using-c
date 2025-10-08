// CH.SC.U4CSE24130
// Program Name: Write a program to demonstrate types of variables 1. Local 2. Global 3. Static

#include <stdio.h>

// 2. Global Variable
// Declared outside any function, accessible from anywhere in the program.
int global_var = 100;

// Function to demonstrate local and static variables
void demonstrateVariables() {
    // 1. Local Variable
    // Declared inside a function, its scope is limited to that function.
    // It is created each time the function is called and destroyed when it exits.
    int local_var = 10; 

    // 3. Static Variable
    // Declared inside a function with the 'static' keyword.
    // Its scope is local to the function, but its lifetime is throughout the program.
    // It retains its value between function calls.
    static int static_var = 0;

    printf("  Inside function: local_var = %d, static_var = %d, global_var = %d\n", local_var, static_var, global_var);
    local_var++;  // Increments for this call only
    static_var++; // Increments and retains value for subsequent calls
}

int main(){
printf("CH.SC.U4CSE24130\n");

    // 1. Local Variable (in main)
    int main_local_var = 50;

    printf("Initial values in main: main_local_var = %d, global_var = %d\n", main_local_var, global_var);

    printf("\nCalling demonstrateVariables() for the first time:\n");
    demonstrateVariables();
    printf("After first call in main: main_local_var = %d, global_var = %d\n", main_local_var, global_var);

    printf("\nCalling demonstrateVariables() for the second time:\n");
    demonstrateVariables();
    printf("After second call in main: main_local_var = %d, global_var = %d\n", main_local_var, global_var);

    printf("\nCalling demonstrateVariables() for the third time:\n");
    demonstrateVariables();
    printf("After third call in main: main_local_var = %d, global_var = %d\n", main_local_var, global_var);

    // Modify global variable in main
    global_var = 200;
    printf("\nModified global_var in main: %d\n", global_var);
    printf("Calling demonstrateVariables() after global_var modification:\n");
    demonstrateVariables();

    return 0;
}

