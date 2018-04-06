#include<bits/stdc++.h>
using namespace std;
int taka[100100]= {0},coin[110]= {0};
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        memset(taka,0,sizeof taka);
        scanf("%d %d",&n,&k);
        for(i=1;i<=n;i++)
            scanf("%d",&coin[i]);
        taka[0]=1;

        for(i=1; i<=n; i++)
            for(j=coin[i]; j<=k; j++)
            {
                taka[j]=taka[j]+taka[j-coin[i]];
                taka[j]=taka[j]%100000007;
            }

        printf("Case %d: %d\n",cs,taka[k]);
    }

return 0;
}
