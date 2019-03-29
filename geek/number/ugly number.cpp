#include<bits/stdc++.h>
using namespace std;
int dp[10010];
long long ara[10010];

int call(long long i)
{
    long long j=i;
    while(i%2==0 && i!=0)
    {
        i=i/2;
        if(dp[i]!=-1) return dp[i];
    }
    while(i%3==0 && i!=0)
    {
        i=i/3;
        if(dp[i]!=-1) return dp[i];
    }
    while(i%5==0 && i!=0)
    {
        i=i/5;
        if(dp[i]!=-1) return dp[i];
    }
    if(i==1)
        return dp[j]=1;
    else
        return dp[j]=0;
}
int main()
{
    long long i,j,k,l,m,n,t;
    memset(dp,-1,sizeof(dp));
    memset(ara,-1,sizeof(ara));
    scanf("%lld",&t);
    ara[1]=1;
    k=1;
    while(t--)
    {
        scanf("%lld",&n);
        while(k<n)
        {
            for(i=ara[k]+1;;i++)
                if(call(i)==1)
                {
                    k++;
                    ara[k]=i;
                    break;
                }

        }
        cout<<ara[n]<<endl;

    }
}
