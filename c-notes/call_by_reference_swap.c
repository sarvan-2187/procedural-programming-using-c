CH.SC.U4CSE24130
// Program Name: Call by reference method – Swapping of 2 variables

#include <stdio.h>

// Function to swap two integers using call by reference
void swapByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside function (swapByReference): *a = %d, *b = %d\n", *a, *b);
}

int main(){
printf("CH.SC.U4CSE24130\n");

    int x = 10, y = 20;

    printf("Before calling swapByReference: x = %d, y = %d\n", x, y);

    // Call the function by reference, passing addresses of x and y
    swapByReference(&x, &y);

    printf("After calling swapByReference: x = %d, y = %d\n", x, y);
    printf("Note: Values of x and y in main() are swapped because of call by reference.\n");

    return 0;
}

