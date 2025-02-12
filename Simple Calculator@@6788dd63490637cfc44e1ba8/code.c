#include<stdio.h>
int main()
{
    int a,b,o,c;
    scanf("%d&d",&a,&b);
    scanf("%d",&o);
    if(o==+){
    c=a+b;
    printf("%d",c);
    }
    else if(o==-){
        c=a-b;
        printf("%d",c);
    }
    else if(o==*){
        c=a*b;
        printf("%d",c);
    }
    else if(o==/){
        c=a/b;
        printf("%d",c);
    }
    else
    printf("Invalid Operator");
    return 0;
}