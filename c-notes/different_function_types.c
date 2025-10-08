// CH.SC.U4CSE24130
// Program Name: Write a program of different functions
// a. With arguments & return
// b. Without arguments & return
// c. With arguments but without return
// d. Without arguments but with return

#include <stdio.h>

// a. Function with arguments and return value
int add(int a, int b) {
    return a + b;
}

// b. Function without arguments but with return value
int get_number() {
    return 42;
}

// c. Function with arguments but without return value
void print_message(char *message) {
    printf("Message: %s\n", message);
}

// d. Function without arguments and without return value
void say_hello() {
    printf("Hello from say_hello() function!\n");
}

int main(){
printf("CH.SC.U4CSE24130\n");

    // a. Call function with arguments and return value
    int sum = add(10, 20);
    printf("Sum of 10 and 20: %d\n", sum);

    // b. Call function without arguments but with return value
    int num = get_number();
    printf("Number from get_number(): %d\n", num);

    // c. Call function with arguments but without return value
    print_message("This is a message with arguments.");

    // d. Call function without arguments and without return value
    say_hello();

    return 0;
}

