CH.SC.U4CSE24130
// Program Name: C program to update two variables i,j using for loop for 5 times with i=i+1,j=j+2.

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int i = 0, j = 0;

    printf("Initial values: i = %d, j = %d\n", i, j);

    for (int k = 0; k < 5; k++) {
        i = i + 1; // i++
        j = j + 2;
        printf("After iteration %d: i = %d, j = %d\n", k + 1, i, j);
    }

    return 0;
}

