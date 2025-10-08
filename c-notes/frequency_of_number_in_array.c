// CH.SC.U4CSE24130
// Program Name: C Program to check frequency of a given number in an array.

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int arr[] = {1, 2, 3, 2, 4, 2, 5, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int search_num;
    int count = 0;

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the number to find its frequency: ");
    scanf("%d", &search_num);

    for (int i = 0; i < size; i++) {
        if (arr[i] == search_num) {
            count++;
        }
    }

    printf("The number %d appears %d times in the array.\n", search_num, count);

    return 0;
}

