#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>='0' && c<='9'){
        printf("Digit");
    }
    else if(c>='a'&& c<='z' || c>='A' && c<='Z'){
        printf("Consonant");
    }
    else if(c=='a' || c=='i' || c=='e' || c=='o' || c=='u' || c=='A' || c=='I' || c=='E' || c=='O' || c=='U'){
        printf("Vowel");
    }
    else
    printf("Special Character");

    return 0;
}