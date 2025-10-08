// CH.SC.U4CSE24130
// Program Name: Check a number odd or even using ternary operator

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

int num;
printf("Enter an integer: ");
scanf("%d", &num);

(num % 2 == 0) ? printf("%d is an even number.\n", num) : printf("%d is an odd number.\n", num);

return 0;
}

