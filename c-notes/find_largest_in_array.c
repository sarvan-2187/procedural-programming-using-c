// CH.SC.U4CSE24130
// Program Name: C program to find the largest number in array:{10,12,16,4,8}

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int arr[] = {10, 12, 16, 4, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0]; // Assume the first element is the largest

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest number in the array is: %d\n", largest);

    return 0;
}

