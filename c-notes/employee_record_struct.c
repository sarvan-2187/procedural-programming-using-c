// CH.SC.U4CSE24130
// Program Name: Employee Record

#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 50
#define DEPT_LENGTH 50

// Define a structure for Employee
struct Employee {
    int employee_id;
    char name[NAME_LENGTH];
    char department[DEPT_LENGTH];
    float salary;
};

int main(){
printf("CH.SC.U4CSE24130\n");

    struct Employee emp;

    printf("--- Enter Employee Details ---\n");
    printf("Enter Employee ID: ");
    scanf("%d", &emp.employee_id);
    
    // Clear input buffer after reading integer
    while (getchar() != '\n'); 

    printf("Enter Employee Name: ");
    fgets(emp.name, NAME_LENGTH, stdin);
    emp.name[strcspn(emp.name, "\n")] = 0; // Remove trailing newline

    printf("Enter Department: ");
    fgets(emp.department, DEPT_LENGTH, stdin);
    emp.department[strcspn(emp.department, "\n")] = 0; // Remove trailing newline

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("\n--- Employee Details (Table Format) ---\n");
    printf("----------------------------------------------------\n");
    printf("| %-12s | %-20s | %-15s | %-10s |\n", "Employee ID", "Name", "Department", "Salary");
    printf("----------------------------------------------------\n");
    printf("| %-12d | %-20s | %-15s | %-10.2f |\n", emp.employee_id, emp.name, emp.department, emp.salary);
    printf("----------------------------------------------------\n");

    return 0;
}

