// CH.SC.U4CSE24130
// Program Name: Program using auto,continue and break-3

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

for (int i = 1; i <= 10; i++) {
    auto int counter = i; // 'auto' is the default storage class for local variables
    if (counter % 2 != 0) {
        printf("Skipping odd number %d (continue)\n", counter);
        continue; // Skip odd numbers
    }
    printf("Processing even number: %d\n", counter);
    if (counter == 6) {
        printf("Breaking loop at %d (break)\n", counter);
        break; // Exit loop when counter reaches 6
    }
}

return 0;
}

