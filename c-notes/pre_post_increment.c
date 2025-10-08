// CH.SC.U4CSE24130
// Program Name: Use pre and post incrementing operator in all possible ways

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

int a = 5;
int b = 5;
int result;

// Pre-increment
printf("\n--- Pre-increment (a) ---\n");
printf("Initial value of a: %d\n", a); // 5
result = ++a; // a becomes 6, then result becomes 6
printf("Value of a after ++a: %d\n", a); // 6
printf("Value of result after result = ++a: %d\n", result); // 6

// Post-increment
printf("\n--- Post-increment (b) ---\n");
printf("Initial value of b: %d\n", b); // 5
result = b++; // result becomes 5, then b becomes 6
printf("Value of b after b++: %d\n", b); // 6
printf("Value of result after result = b++: %d\n", result); // 5

// Pre-increment in an expression
printf("\n--- Pre-increment in expression ---\n");
a = 10;
printf("Initial value of a: %d\n", a); // 10
printf("Value of ++a * 2: %d\n", ++a * 2); // a becomes 11, then 11 * 2 = 22
printf("Value of a after expression: %d\n", a); // 11

// Post-increment in an expression
printf("\n--- Post-increment in expression ---\n");
b = 10;
printf("Initial value of b: %d\n", b); // 10
printf("Value of b++ * 2: %d\n", b++ * 2); // 10 * 2 = 20, then b becomes 11
printf("Value of b after expression: %d\n", b); // 11

return 0;
}

