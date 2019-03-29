
#include<bits/stdc++.h>
using namespace std;
long long dp[200];
long long p=1000000007;
long long call(long long n)
{
    if(dp[n]!=-1) return dp[n];
    if(n>2)
        return dp[n]=(call(n-1)%p+(n-1)*call(n-2)%p)%p;
    return dp[n]=n;
}

int main()
{
    long long i,j,k,l,t,n,ans;
    scanf("%lld",&t);
    memset(dp,-1,sizeof(dp));
    while(t--)
    {
        scanf("%lld",&n);

        ans=call(n);
        cout<<ans<<endl;
    }
}
