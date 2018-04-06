#include <stdio.h>
int main()
{
    long long a,b,x;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        x=a-b;
        if(x<0)x=-x;
        printf("%lld\n",x);
    }

    return 0;
}
