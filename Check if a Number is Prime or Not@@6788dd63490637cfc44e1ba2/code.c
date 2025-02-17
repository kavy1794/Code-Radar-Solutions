#include <stdio.h>
int main()
{
    int i,n,prime=1;
    scanf("%d",&n);
    if(n<=1){
        prime=0;
    }else{
        for(i=2; i <=n/ 2 ;++i){
            if(n%i==0){
            prime=0;
            break;
            
            }
        }
        
    }
    if(prime)
    printf("Prime",n);
    else
    printf("Not Prime",n);
    return 0;
}