#include <stdio.h>
int main() {
    float a,b,c,avg;
    scan("%f%f%f",&a,&b,&c);
    avg=a+b+c/3;
    printf("Average: %.2f",avg);
    return 0;
}