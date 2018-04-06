#include<stdio.h>
int ara[1200],d[1200],su[1200];
int main()
{
    long long i,j,k,l,m,n,o,p,s,c;
    for(i=0;i<1100;i++)
        su[i]=0;
    for(n=1;n<=1000;n++)
    {
        l=n/2;
        for(i=1;i<=l;i++)
            ara[i]=1;
        k=1;
        for(i=1;i<=l;i++)
        {
            if(n%i==0){
                d[k]=i;
                k++;}
            else
                for(j=1;i*j<=l;j++)
                    ara[i*j]=0;
        }
        s=0;
        d[k]=n;
        for(i=1;i<=k;i++)
            s=s+d[i];
        if(su[s]<n)
            su[s]=n;
    }
    c=0;
    while(scanf("%lld",&n)==1)
    {
        c++;
        if(n==0)
            break;
        if(su[n]==0)
            printf("Case %lld: -1\n",c);
        if(su[n]>0)
            printf("Case %lld: %d\n",c,su[n]);
    }
    return 0;
}
