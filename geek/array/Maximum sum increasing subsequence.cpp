#include<bits/stdc++.h>
using namespace std;
int ara[1000010];
int sum[1000010];

int main()
{

    int s,i,j,k,l,m,n,p,t,b;

    scanf("%d",&t);
    while(t--)
    {
        int mx=INT_MIN;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);

        for(i=0;i<n;i++)
            sum[i]=ara[i];
        for(i=1;i<n;i++)
            for(j=0;j<i;j++)
                if(ara[i]>ara[j] && sum[i]<ara[i]+sum[j])
                    sum[i]=ara[i]+sum[j];
        for(i=0;i<n;i++)
            if(mx<sum[i])
                mx=sum[i];
        printf("%d\n",mx);
    }

    return 0;

}
