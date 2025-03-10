#include <stdio.h>

// Define the Student structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    struct Student topStudent;

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

        // Update the top student if the current student has higher marks
        if (i == 0 || students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }

    // Print the information of the top student
    printf("\nTop Scorer:\n");
    printf("Roll Number: %d\n", topStudent.rollNumber);
    printf("Name: %s\n", topStudent.name);
    printf("Marks: %.2f\n", topStudent.marks);

    return 0;
}
