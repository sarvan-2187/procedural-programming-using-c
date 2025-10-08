// CH.SC.U4CSE24130
// Program Name: Pattern Printing: 1
// 23
// 456

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

    int rows = 3;
    int num = 1;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

