
#include<bits/stdc++.h>
using namespace std;
int m,n,ara[400],dp[400][400];
int ans;

int call(int p,int sum)
{

    if(p==n)
    {
        if(sum==m)
            return 1;
        return 0;
    }

    if(dp[p][sum]!=-1) return dp[p][sum];

    int i=0,j=0;
    if(sum+ara[p]<=m)
        i=call(p,sum+ara[p]);
    j=call(p+1,sum);

    dp[p][sum]=i+j;
    return dp[p][sum];

}

int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        scanf("%d",&m);

        memset(dp,-1,sizeof(dp));
        ans=call(0,0);
        cout<<ans<<endl;


    }

}
