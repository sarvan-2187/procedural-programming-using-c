// CH.SC.U4CSE24130
// Program Name: Program using continue,break including if-else.

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

for (int i = 1; i <= 10; i++) {
    if (i == 3) {
        printf("Skipping number %d (continue)\n", i);
        continue; // Skip the rest of the current iteration if i is 3
    } else if (i == 7) {
        printf("Breaking loop at number %d (break)\n", i);
        break; // Exit the loop entirely if i is 7
    } else {
        printf("Current number: %d\n", i);
    }
}

return 0;
}

