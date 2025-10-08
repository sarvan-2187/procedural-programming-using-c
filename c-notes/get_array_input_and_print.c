// CH.SC.U4CSE24130
// Program Name: Get input of array from user and print it

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; // Declaring array of user-defined size (C99 feature)

    printf("Enter %d integer elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nElements of the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

