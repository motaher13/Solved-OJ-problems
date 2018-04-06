#include<stdio.h>
int main()
{
    long long i,j,k=0,l,s,d,n=0;
    while(scanf("%lld %lld",&s,&d)!=EOF)
    {
        for(k=s; ;k++)
        {
            n=n+k;
            if(n>=d)
                break;
        }
        printf("%lld\n",k);
        k=0,n=0;
    }
    return 0;
}
