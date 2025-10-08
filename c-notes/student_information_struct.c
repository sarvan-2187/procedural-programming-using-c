// CH.SC.U4CSE24130
// Program Name: Student Information

#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 5
#define NUM_SUBJECTS 3
#define NAME_LENGTH 50

// Define a structure for Student
struct Student {
    char name[NAME_LENGTH];
    int roll_number;
    int marks[NUM_SUBJECTS];
    float average_marks;
};

int main(){
printf("CH.SC.U4CSE24130\n");

    struct Student students[NUM_STUDENTS];

    // Input details for each student
    printf("Enter details for %d students:\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", students[i].name); // Read name (single word)
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll_number);
        
        int sum_marks = 0;
        printf("Enter marks for %d subjects:\n", NUM_SUBJECTS);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("  Subject %d Mark: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            sum_marks += students[i].marks[j];
        }
        students[i].average_marks = (float)sum_marks / NUM_SUBJECTS;
    }

    // Display details and average marks for each student
    printf("\n--- Student Details and Average Marks ---\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("  Name: %s\n", students[i].name);
        printf("  Roll Number: %d\n", students[i].roll_number);
        printf("  Marks: ");
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%d ", students[i].marks[j]);
        }
        printf("\n");
        printf("  Average Marks: %.2f\n", students[i].average_marks);
    }

    return 0;
}

