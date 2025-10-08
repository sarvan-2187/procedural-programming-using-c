// CH.SC.U4CSE24130
// Program Name: Write a program to check a number odd or even

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

int num;
printf("Enter an integer: ");
scanf("%d", &num);

if (num % 2 == 0) {
    printf("%d is an even number.\n", num);
} else {
    printf("%d is an odd number.\n", num);
}

return 0;
}

