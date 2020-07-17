#include<bits/stdc++.h>
using namespace std;
int ara[30][4];
int main()
{
    int i,j,k,l,t,n;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d",&ara[i][0],&ara[i][1],&ara[i][2]);
            if(i>0)
            {
                ara[i][0]+=min(ara[i-1][1],ara[i-1][2]);
                ara[i][1]+=min(ara[i-1][0],ara[i-1][2]);
                ara[i][2]+=min(ara[i-1][1],ara[i-1][0]);
            }
        }
        k=min(ara[n-1][0],min(ara[n-1][1],ara[n-1][2]));
        printf("Case %d: %d\n",cs,k);

    }
    return 0;
}
