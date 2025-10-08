// CH.SC.U4CSE24130
// Program Name: Program using auto,continue and break-2

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

for (int i = 0; i < 10; i++) {
    auto int value = i; // 'auto' is the default storage class for local variables
    if (value % 2 != 0) {
        printf("Skipping odd number %d (continue)\n", value);
        continue; // Skip odd numbers
    }
    printf("Processing even number: %d\n", value);
    if (value == 8) {
        printf("Breaking loop at %d (break)\n", value);
        break; // Exit loop when value is 8
    }
}

return 0;
}

