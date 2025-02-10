#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    while(a--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isprime(num));
        }
        return 0;
}