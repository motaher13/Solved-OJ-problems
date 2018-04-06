#include<stdio.h>
long long b[100000],g[100000];
int main()
{
    int i,j,k,l,n;
    b[0]=0;
    g[0]=1;
    g[1]=1;
    for(i=2;i<80;i++)
            g[i]=g[i-1]+g[i-2];
    while(scanf("%d",&n)==1)
    {
        if(n==-1)
            break;

        for(i=1;i<=n+1;i++)
            b[i]=b[i-1]+g[i-1];

        printf("%lld %lld\n",b[n],b[n+1]);
    }
    return 0;
}
