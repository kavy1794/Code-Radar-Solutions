#include <stdio.h>
int main() {
    int a,b,result;
    scanf("%d%d",&a,&b);
    result=(a>>b)&1

    printf("%d",result);
    return 0;
}