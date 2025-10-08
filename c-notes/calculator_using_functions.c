// CH.SC.U4CSE24130
// Program Name: Write a calculator program using functions

#include <stdio.h>

// Function to perform addition
float add(float num1, float num2) {
    return num1 + num2;
}

// Function to perform subtraction
float subtract(float num1, float num2) {
    return num1 - num2;
}

// Function to perform multiplication
float multiply(float num1, float num2) {
    return num1 * num2;
}

// Function to perform division
float divide(float num1, float num2) {
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Return 0 or handle error appropriately
    }
    return num1 / num2;
}

int main(){
printf("CH.SC.U4CSE24130\n");

    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // Space before %c to consume newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case '/':
            result = divide(num1, num2);
            if (num2 != 0) {
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

