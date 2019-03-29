#include<stdio.h>
int main()
{
    long long i,j,k,n,m=0;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        while(1)
        {
            if(n<10)
            {
                printf("%lld\n",n);
                break;
            }

            while(n>0)
            {
                m=m+n%10;
                n=n/10;
            }

            n=m;
            m=0;
        }
    }
    return 0;
}
