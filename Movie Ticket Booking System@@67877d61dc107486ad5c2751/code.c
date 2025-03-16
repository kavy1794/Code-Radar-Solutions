#include <stdio.h>
#include <string.h>

struct MovieTicket {
    char movieName[50];
    char ticketType[20];
    float ticketPrice;
};

int main() {
    int N;
    scanf("%d", &N);

    struct MovieTicket tickets[N];
    float totalStandard = 0.0, totalPremium = 0.0, totalVIP = 0.0;

    for (int i = 0; i < N; i++) {
        scanf("%s %s %f", tickets[i].movieName, tickets[i].ticketType, &tickets[i].ticketPrice);

        if (strcmp(tickets[i].ticketType, "Standard") == 0) {
            totalStandard += tickets[i].ticketPrice;
        } else if (strcmp(tickets[i].ticketType, "Premium") == 0) {
            totalPremium += tickets[i].ticketPrice;
        } else if (strcmp(tickets[i].ticketType, "VIP") == 0) {
            totalVIP += tickets[i].ticketPrice;
        }
    }

    printf("Standard: %.2f\n", totalStandard);
    printf("Premium: %.2f\n", totalPremium);
    printf("VIP: %.2f\n", totalVIP);

    return 0;
}
