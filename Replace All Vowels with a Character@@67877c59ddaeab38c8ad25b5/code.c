#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    scanf("%[^\n]", str); 
    char k;
    scanf(" %c",&k);

    for (int i = 0; str[i] != '\0'; i++) {
        char m=tolower(str[i]);
        if(m=='a'||m=='e'||m=='i'||m=='o'||m=='u'){
            str[i]=k;
        }
    }
    printf("%s",str);
    return 0;
}