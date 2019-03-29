#include<stdio.h>
int ara[20][20]={0};

int call(long long n,long long r)
{
    if(n==r) return 1;
    if(n<0 || r<0) return 0;
    if(r==1) return n;

    if(ara[n][r]==0)
        ara[n][r]=call(n-1,r)+call(n-1,r-1);
    return ara[n][r];
}

int main()
{
    long long i,j,k,l,t,p,q,r,a,x,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a,&x,&n);
        for(i=0;i<=n;i++)
        {
            p=call(n,i);

            q=1,r=1;
            for(j=1;j<=n-i;j++)
                q=q*a;
            for(j=0;j<i;j++)
                r=r*x;
            long long s=p*q*r;
            printf("%lld ",s);

        }
        printf("\n");

    }
}
