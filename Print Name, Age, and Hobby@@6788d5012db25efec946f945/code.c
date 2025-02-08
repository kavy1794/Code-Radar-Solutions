#include <stdio.h>
int main() {
    int age;
    char name[100],hobby[100];
    scanf("%s%d%s",name,&age,hobby);
    printf("Name: \n%s",name);
    printf("Age: \n%d",age);
    printf("Hobby: \n%s",hobby);
    return 0;
}