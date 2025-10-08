// CH.SC.U4CSE24130
// Program Name: Perform different arithmetic operation

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

int num1, num2;

printf("Enter first integer: ");
scanf("%d", &num1);
printf("Enter second integer: ");
scanf("%d", &num2);

printf("\nResults of arithmetic operations:\n");
printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

if (num2 != 0) {
    printf("Division: %d / %d = %f\n", num1, num2, (float)num1 / num2);
    printf("Modulo: %d %% %d = %d\n", num1, num2, num1 % num2);
} else {
    printf("Division by zero is not allowed.\n");
    printf("Modulo by zero is not allowed.\n");
}

return 0;
}

