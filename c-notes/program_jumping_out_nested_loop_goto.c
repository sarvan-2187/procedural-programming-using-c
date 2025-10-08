// CH.SC.U4CSE24130
// Program Name: Program for Jumping out of nested loop using go to

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

int i, j;

for (i = 1; i <= 3; i++) {
    for (j = 1; j <= 3; j++) {
        printf("i = %d, j = %d\n", i, j);
        if (i == 2 && j == 2) {
            printf("Jumping out of both loops using goto.\n");
            goto end_loops; // Jump to the label outside both loops
        }
    }
}

end_loops:
printf("Execution continued after nested loops.\n");

return 0;
}

