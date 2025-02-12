#include<stdio.h>
int main()
{
    int a,b,c;
    char o;
    scanf("%d&d",&a,&b);
    scanf("%c",&o);
    if(o=='+'){
    c=a+b;
    printf("%d",c);
    }
    else if(o=='-'){
        c=a-b;
        printf("%d",c);
    }
    else if(o=='*'){
        c=a*b;
        printf("%d",c);
    }
    else if(o=='/'){
        c=a/b;
        printf("%d",c);
    }
    else
    printf("Invalid Operator");
    return 0;
}