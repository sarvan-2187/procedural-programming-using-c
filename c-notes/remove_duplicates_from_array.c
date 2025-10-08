// CH.SC.U4CSE24130
// Program Name: C - program which gets an array as an input and remove the duplicate elements from the array and print the new array.

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int arr[100]; // Assuming a maximum array size of 100
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d integer elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Logic to remove duplicate elements
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            // If a duplicate is found
            if (arr[i] == arr[j]) {
                // Shift elements to the left to overwrite the duplicate
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; // Decrement the size of the array
                j--;    // Decrement j to check the new element at the current position
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

