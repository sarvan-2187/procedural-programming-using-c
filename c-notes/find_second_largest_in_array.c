// CH.SC.U4CSE24130
// Program Name: C Program to find the second largest element in array:{10,8,16,4,12}

#include <stdio.h>
#include <limits.h> // For INT_MIN

int main(){
printf("CH.SC.U4CSE24130\n");

    int arr[] = {10, 8, 16, 4, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    if (size < 2) {
        printf("Array must have at least two elements to find the second largest.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no second largest element (all elements might be same).\n");
    } else {
        printf("The second largest number in the array is: %d\n", secondLargest);
    }

    return 0;
}

