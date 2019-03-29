#include <stdio.h>
int main()
{
    long long a,b,k;
    while(scanf("%lld %lld",&a,&b)==2){
    k=a-b;
    if(k<0)k=-k;
    printf("%lld\n",k);
    }
    return 0;
}
