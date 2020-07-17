#include<stdio.h>
int main()
{
    long long i,j,k,l,n,p,q,r,t,s;
    p=0,q=1,r=2;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
            break;
        for(i=4;i<=n;i++)
        {
            s=(p+q+r)%1000000009;
            p=q,q=r,r=s;

        }
        printf("%lld\n",s);
        p=0,q=1,r=2;
    }
    return 0;
}
