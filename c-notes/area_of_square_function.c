// CH.SC.U4CSE24130
// Program Name: Write a program to find area of square using functions

#include <stdio.h>

// Function to calculate the area of a square
float calculateSquareArea(float side) {
    return side * side;
}

int main(){
printf("CH.SC.U4CSE24130\n");

    float side;
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    float area = calculateSquareArea(side);
    printf("The area of the square with side %.2f is: %.2f\n", side, area);

    return 0;
}

