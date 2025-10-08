// CH.SC.U4CSE24130
// Program Name: C program to demonstrate that a variable declared locally within a for loop does not affect a globally declared variable of the same name.

#include <stdio.h>

int global_var = 100; // Global variable

int main(){
printf("CH.SC.U4CSE24130\n");

    int main_local_var = 50; // Local variable in main

    printf("Before loop: global_var = %d, main_local_var = %d\n", global_var, main_local_var);

    for (int i = 0; i < 3; i++) {
        int global_var = i * 10; // This is a new local variable named global_var, scoped to the loop
        printf("Inside loop (iteration %d): local global_var = %d, global_var (actual global) = %d\n", i, global_var, ::global_var); // Using scope resolution operator for clarity, though not strictly needed in C for global
    }

    printf("After loop: global_var = %d, main_local_var = %d\n", global_var, main_local_var);

    return 0;
}

