#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a,&b,&c);
    if(a==b==c)
    printf("Equilateral");
    else if(a==b!=c || a==c!=b || c==b!=a)
    printf("Isosceles");
    else
    printf("Scalene");
    return 0;
}