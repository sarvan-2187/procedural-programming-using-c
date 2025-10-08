// CH.SC.U4CSE24130
// Program Name: Usage of typecasting

#include <stdio.h>

int main(){
printf("CH.SC.U4CSE24130\n");

int int_var = 10;
float float_var = 20.5f;
double double_var = 30.75;

// Implicit typecasting (automatic conversion)
printf("\n--- Implicit Typecasting ---\n");
float result_implicit_1 = int_var + float_var; // int_var is promoted to float
printf("int + float = %.2f (int_var promoted to float)\n", result_implicit_1);

double result_implicit_2 = int_var + double_var; // int_var is promoted to double
printf("int + double = %.2lf (int_var promoted to double)\n", result_implicit_2);

// Explicit typecasting (manual conversion)
printf("\n--- Explicit Typecasting ---\n");

// Converting float to int
int int_from_float = (int)float_var;
printf("Float %.2f explicitly cast to int = %d\n", float_var, int_from_float);

// Converting double to int
int int_from_double = (int)double_var;
printf("Double %.2lf explicitly cast to int = %d\n", double_var, int_from_double);

// Converting int to float
float float_from_int = (float)int_var;
printf("Int %d explicitly cast to float = %.2f\n", int_var, float_from_int);

// Performing division with explicit typecasting to get float result
int a = 10, b = 3;
float division_result = (float)a / b;
printf("Division (int/int with explicit cast): %d / %d = %.2f\n", a, b, division_result);

return 0;
}

