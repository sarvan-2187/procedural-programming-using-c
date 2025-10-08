CH.SC.U4CSE24130
// Program Name: Call by value method – swapping of 2 variables

#include <stdio.h>

// Function to attempt swapping two integers using call by value
void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside function (swapByValue): a = %d, b = %d\n", a, b);
}

int main(){
printf("CH.SC.U4CSE24130\n");

    int x = 10, y = 20;

    printf("Before calling swapByValue: x = %d, y = %d\n", x, y);

    // Call the function by value
    swapByValue(x, y);

    printf("After calling swapByValue: x = %d, y = %d\n", x, y);
    printf("Note: Values of x and y in main() remain unchanged because of call by value.\n");

    return 0;
}

