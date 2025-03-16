#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
    float bonus;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Employee employees[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &employees[i].id, employees[i].name, &employees[i].salary);
        if (employees[i].salary < 50000) {
            employees[i].bonus = employees[i].salary * 0.1; // 10% bonus
        } else {
            employees[i].bonus = employees[i].salary * 0.05; // 5% bonus
        }
    }

    for (int i = 0; i < N; i++) {
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", employees[i].id, employees[i].name, employees[i].bonus);
    }

    return 0;
}
