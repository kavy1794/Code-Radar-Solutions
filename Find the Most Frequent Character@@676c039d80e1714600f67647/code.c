#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], mostFrequent;
    int freq[256] = {0}, maxFreq = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            freq[(int)str[i]]++;
            if (freq[(int)str[i]] > maxFreq || 
               (freq[(int)str[i]] == maxFreq && str[i] < mostFrequent)) {
                maxFreq = freq[(int)str[i]];
                mostFrequent = str[i];
            }
        }
    }

    printf("%c\n", mostFrequent);

    return 0;
}
