// CH.SC.U4CSE24130
// Program Name: Use #define MAX in array program using break continue and goto also.

#include <stdio.h>

#define MAX 10 // Define a constant for array size

int main(){
printf("CH.SC.U4CSE24130\n");

    int arr[MAX];
    int i;

    printf("Initializing array elements:\n");
    for (i = 0; i < MAX; i++) {
        arr[i] = i * 2; // Populate array with even numbers
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("\nDemonstrating continue, break, and goto:\n");
    for (i = 0; i < MAX; i++) {
        if (arr[i] == 6) {
            printf("  Found %d at index %d. Using continue.\n", arr[i], i);
            continue; // Skip printing for this iteration
        }

        if (arr[i] == 14) {
            printf("  Found %d at index %d. Using break.\n", arr[i], i);
            break; // Exit the loop
        }

        printf("  Processing arr[%d] = %d\n", i, arr[i]);

        if (i == 8) {
            printf("  Index %d reached. Using goto to jump to end.\n", i);
            goto end_of_program; // Jump to a label
        }
    }

    printf("Loop finished naturally (this line might not be reached if goto is triggered).\n");

end_of_program:
    printf("\nEnd of program execution.\n");

    return 0;
}

