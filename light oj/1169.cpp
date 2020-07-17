#include<bits/stdc++.h>
using namespace std;
int ara[1010][3],jm[1010][3];
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i][0]);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i][1]);
        for(i=1;i<n;i++)
            scanf("%d",&jm[i][1]);
        for(i=1;i<n;i++)
            scanf("%d",&jm[i][0]);
        for(i=1;i<n;i++)
        {
            ara[i][0]+=min(ara[i-1][0],ara[i-1][1]+jm[i][0]);
            ara[i][1]+=min(ara[i-1][1],ara[i-1][0]+jm[i][1]);
        }
        k=min(ara[n-1][0],ara[n-1][1]);
        //printf("%d %d\n",ara[n-1][0],ara[n-1][1]);
        printf("Case %d: %d\n",cs,k);
    }
    return 0;
}
