#include <stdio.h>

int main()
{
    char c;
    printf("Enter the digit");
    scanf("%c",&c);
    if(c>='0' && c<='9'){
        printf("digit");
    }
    else if(c>='a'&& c<='z' || c>='A' && c<='Z'){
        printf("consonant");
    }
    else if(c=='a' || c=='i' || c=='e' || c=='o' || c=='u' || c=='A' || c=='I' || c=='E' || c=='O' || c=='U'){
        printf("vowel");
    }
    else
    printf("special character");

    return 0;
}

