
#include<bits/stdc++.h>
using namespace std;
int m,n,ara[1010],dp[1010][1000010];
int ans;

int call(int p,int sum)
{
//    printf("%d\n",sum);
    if(sum!=0 && sum%m==0)
    {
//        printf("%d\n",sum);
        return 1;
    }
    if(p>=n) return 0;
    if(dp[p][sum]!=-1) return dp[p][sum];
    return dp[p][sum]=call(p+1,sum)||call(p+1,sum+ara[p]);

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
