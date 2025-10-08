// CH.SC.U4CSE24130
// Program Name: Write a program to get an multi-dimensional array from user for 5 students with 3 subject for each of them and print the topper and his avg mark

#include <stdio.h>

#define NUM_STUDENTS 5
#define NUM_SUBJECTS 3

int main(){
printf("CH.SC.U4CSE24130\n");

    int marks[NUM_STUDENTS][NUM_SUBJECTS];
    float avg_marks[NUM_STUDENTS];
    int i, j;

    // Get marks input for each student and subject
    printf("Enter marks for %d students in %d subjects:\n", NUM_STUDENTS, NUM_SUBJECTS);
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("\nEnter marks for Student %d:\n", i + 1);
        for (j = 0; j < NUM_SUBJECTS; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Calculate average marks for each student
    for (i = 0; i < NUM_STUDENTS; i++) {
        int sum = 0;
        for (j = 0; j < NUM_SUBJECTS; j++) {
            sum += marks[i][j];
        }
        avg_marks[i] = (float)sum / NUM_SUBJECTS;
    }

    // Find the topper (student with the highest average mark)
    int topper_index = 0;
    float max_avg = avg_marks[0];

    for (i = 1; i < NUM_STUDENTS; i++) {
        if (avg_marks[i] > max_avg) {
            max_avg = avg_marks[i];
            topper_index = i;
        }
    }

    // Print the topper and their average mark
    printf("\n--- Results ---\n");
    printf("Student Averages:\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d Average: %.2f\n", i + 1, avg_marks[i]);
    }

    printf("\nTopper is Student %d with an average mark of %.2f\n", topper_index + 1, max_avg);

    return 0;
}

