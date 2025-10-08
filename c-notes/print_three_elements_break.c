// CH.SC.U4CSE24130
// Program Name: Print only three element of array and then break the loop

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Printing first three elements of the array:\n");
    for (int i = 0; i < size; i++) {
        if (i >= 3) {
            printf("Breaking loop after printing 3 elements.\n");
            break; // Exit the loop after 3 elements
        }
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

