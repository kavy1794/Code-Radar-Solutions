#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    // if(a <= 0 || b <= 0 || c <= 0) {
    //     printf("The sides of a triangle must be positive integers.\n");
    // } else if(a + b <= c || a + c <= b || b + c <= a) {
    //     printf("The given lengths do not form a triangle.\n");
    // } else {
        if(a == b && b == c) {
            printf("Equilateral\n");
        } else if(a == b || a == c || b == c) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    // }

    return 0;
}
