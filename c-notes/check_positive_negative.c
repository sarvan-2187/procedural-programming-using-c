CH.SC.U4CSE24130
// Program Name: C program to check whether the given number is positive or negative.

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

int num;
printf("Enter an integer: ");
scanf("%d", &num);

if (num > 0) {
    printf("%d is a positive number.\n", num);
} else if (num < 0) {
    printf("%d is a negative number.\n", num);
} else {
    printf("The number is zero.\n");
}

return 0;
}

