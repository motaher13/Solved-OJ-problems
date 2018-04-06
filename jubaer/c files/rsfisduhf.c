#include <stdio.h>
int main()
{
    long long a=1232,b,i;
    long long sum=0;
    for(i=1;i<=2147483647;i++){
        sum=a+a-i;
    }
    printf("%lld %lld",i,sum);

}
