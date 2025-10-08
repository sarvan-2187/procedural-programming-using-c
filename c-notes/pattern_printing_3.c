// CH.SC.U4CSE24130
// Program Name: Pattern Printing: 1
// 11
// 111
// 1111

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int rows = 4;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("1");
        }
        printf("\n");
    }

    return 0;
}

