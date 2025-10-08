// CH.SC.U4CSE24130
// Program Name: Pre-define an Array and print it

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Elements of the pre-defined array are:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

