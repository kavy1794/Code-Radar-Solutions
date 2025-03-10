#include <stdio.h>

// Define the Student structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;

    // Ask the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of Student structures to hold the data
    struct Student students[n];

    // Read information for each student
    for (int i = 0; i < n; i++) {
        printf("Enter information for student %d:\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Print the information of all students
    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}
