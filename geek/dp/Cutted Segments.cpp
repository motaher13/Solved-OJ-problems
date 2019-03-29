

#include<bits/stdc++.h>
using namespace std;
int n,ara[10],dp[10][4010];
int ans;

int call(int p,int sum)
{
    if(sum==n )return 1;
    if(sum>n) return 0;
    if(p>=3) return 0;
    if(dp[p][sum]!=-1) return dp[p][sum];
    if(sum+ara[p]>n)
        dp[p][sum]=call(p+1,sum);
    else
    {
        int i=call(p,sum+ara[p]);
        int j=call(p+1,sum);
        if(i>0)
            i++;
        dp[p][sum]=max(i,j);
    }
    return dp[p][sum];


}

int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<3;i++)
            scanf("%d",&ara[i]);

        memset(dp,-1,sizeof(dp));
        ans=call(0,0);
        ans--;
        cout<<ans<<endl;


    }

}
