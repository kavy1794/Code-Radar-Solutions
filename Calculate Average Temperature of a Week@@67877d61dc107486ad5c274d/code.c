#include <stdio.h>
#include <string.h>

struct Day {
    char name[20];
    float temperature;
};

int main() {
    struct Day week[7];
    float totalTemperature = 0;

    for (int i = 0; i < 7; i++) {
        scanf("%s %f", week[i].name, &week[i].temperature);
        totalTemperature += week[i].temperature;
    }

    float averageTemperature = totalTemperature / 7;

    printf("Average Temperature: %.2f\n", averageTemperature);

    return 0;
}
