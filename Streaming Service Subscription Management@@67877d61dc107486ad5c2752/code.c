#include <stdio.h>
#include <string.h>

struct Subscription {
    char userName[50];
    char subscriptionType[20];
    float subscriptionCost;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Subscription subscriptions[N];
    int countBasic = 0, countStandard = 0, countPremium = 0;
    float revenueBasic = 0.0, revenueStandard = 0.0, revenuePremium = 0.0;

    for (int i = 0; i < N; i++) {
        scanf("%s %s %f", subscriptions[i].userName, subscriptions[i].subscriptionType, &subscriptions[i].subscriptionCost);

        if (strcmp(subscriptions[i].subscriptionType, "Basic") == 0) {
            countBasic++;
            revenueBasic += subscriptions[i].subscriptionCost;
        } else if (strcmp(subscriptions[i].subscriptionType, "Standard") == 0) {
            countStandard++;
            revenueStandard += subscriptions[i].subscriptionCost;
        } else if (strcmp(subscriptions[i].subscriptionType, "Premium") == 0) {
            countPremium++;
            revenuePremium += subscriptions[i].subscriptionCost;
        }
    }

    printf("Basic: %d Users, Revenue: %.2f; ", countBasic, revenueBasic);
    printf("Standard: %d Users, Revenue: %.2f; ", countStandard, revenueStandard);
    printf("Premium: %d Users, Revenue: %.2f\n", countPremium, revenuePremium);

    return 0;
}
