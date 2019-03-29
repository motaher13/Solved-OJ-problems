
#include<bits/stdc++.h>
using namespace std;
int ara[200],dp[100][100010];
int n;
int v;

int call(int i,int sum)
{
    if(sum==v) return 1;
    if(i>=n && sum!=v) return 0;

    if(dp[i][sum]!=-1) return dp[i][sum];
    if(sum+ara[i]>v)
        dp[i][sum]=call(i+1,sum);
    else
        dp[i][sum]=call(i+1,sum)+call(i+1,sum+ara[i]);
    return dp[i][sum];
}
int main()
{
    int i,j,k,l,m,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        scanf("%d",&v);


        memset(dp,-1,sizeof(dp));
        i=call(0,0);
        printf("%d\n",i);

    }
}
