#include<stdio.h>
int main()
{
    long long n,s;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
            break;
        s=n*(n+1)*(2*n+1)/6;
        printf("%lld\n",s);
    }
    return 0;
}
