// CH.SC.U4CSE24130
// Program Name: Write a program using typedef

#include <stdio.h>

// Define a new type name for int
typedef int Integer;

// Define a new type name for a struct
typedef struct {
    char name[50];
    int age;
} Person;

int main(){
printf("CH.SC.U4CSE24130\n");

    Integer myNumber = 100;
    printf("My number (using Integer typedef): %d\n", myNumber);

    Person p1;
    printf("Enter person's name: ");
    scanf("%s", p1.name);
    printf("Enter person's age: ");
    scanf("%d", &p1.age);

    printf("Person Name: %s, Age: %d\n", p1.name, p1.age);

    return 0;
}

