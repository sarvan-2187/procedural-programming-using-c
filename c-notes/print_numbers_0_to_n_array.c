// CH.SC.U4CSE24130
// Program Name: C program to print the numbers from 0 to n using array.

#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main(){
printf("CH.SC.U4CSE24130\n");

    int n;

    printf("Enter a non-negative integer (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    // Dynamically allocate memory for the array
    // Array size will be n+1 to store numbers from 0 to n
    int *arr = (int *)malloc((n + 1) * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Populate the array with numbers from 0 to n
    for (int i = 0; i <= n; i++) {
        arr[i] = i;
    }

    // Print the numbers from the array
    printf("Numbers from 0 to %d are:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}

