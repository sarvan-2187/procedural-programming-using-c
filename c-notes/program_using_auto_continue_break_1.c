// CH.SC.U4CSE24130
// Program Name: Program using auto,continue and break-1

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

for (int i = 1; i <= 10; i++) {
    // auto is the default storage class for local variables
    auto int num = i; 
    if (num == 3) {
        printf("Skipping number %d (continue)\n", num);
        continue; // Skip the rest of the current iteration
    }
    if (num == 7) {
        printf("Breaking loop at number %d (break)\n", num);
        break; // Exit the loop entirely
    }
    printf("Current number: %d\n", num);
}

return 0;
}

