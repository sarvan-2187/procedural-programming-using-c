// CH.SC.U4CSE24130
// Program Name: Call by value method – incrementing a variable

#include <stdio.h>

// Function to increment a variable using call by value
void incrementByValue(int num) {
    printf("Inside function: Value before increment = %d\n", num);
    num++; // Increment the local copy of num
    printf("Inside function: Value after increment = %d\n", num);
}

int main(){
printf("CH.SC.U4CSE24130\n");

    int myVar = 10;

    printf("Before calling incrementByValue: myVar = %d\n", myVar);

    // Call the function by value
    incrementByValue(myVar);

    printf("After calling incrementByValue: myVar = %d\n", myVar);
    printf("Note: The value of myVar in main() remains unchanged because of call by value.\n");

    return 0;
}

