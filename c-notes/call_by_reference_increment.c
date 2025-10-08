// CH.SC.U4CSE24130
// Program Name: Call by reference method – incrementing a variable

#include <stdio.h>

// Function to increment a variable using call by reference
void incrementByReference(int *num_ptr) {
    printf("Inside function: Value before increment = %d\n", *num_ptr);
    (*num_ptr)++; // Increment the value pointed to by num_ptr
    printf("Inside function: Value after increment = %d\n", *num_ptr);
}

int main(){
printf("CH.SC.U4CSE24130\n");

    int myVar = 10;

    printf("Before calling incrementByReference: myVar = %d\n", myVar);

    // Call the function by reference, passing the address of myVar
    incrementByReference(&myVar);

    printf("After calling incrementByReference: myVar = %d\n", myVar);
    printf("Note: The value of myVar in main() is changed because of call by reference.\n");

    return 0;
}

