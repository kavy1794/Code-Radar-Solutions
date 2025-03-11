#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];
    struct Student minStudent;

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        
        if (i <= 2 || students[i].marks < minStudent.marks) {
            minStudent = students[i];
        }
    }

    printf("Roll Number: %d,Name: %s,Marks: %.2f", minStudent.rollNumber,minStudent.name,minStudent.marks);

    return 0;
}
