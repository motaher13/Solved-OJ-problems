#include<bits/stdc++.h>
using namespace std;
int lst[300],ara[210][110],dp[210][110],n;
int call(int i,int j);
int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        scanf("%d",&n);

        for(i=1;i<=n;i++)
            lst[i]=i;
        for(j=i;j<2*n;j++)
            lst[j]=n-(j-n);

        for(i=1;i<2*n;i++)
            for(j=1;j<=lst[i];j++)
                scanf("%d",&ara[i][j]);

        memset(dp,-1,sizeof dp);
        j=call(1,1);
        printf("Case %d: %d\n",cs,j);
    }
    return 0;
}
int call(int i,int j)
{
    if(i>=2*n || j>lst[i] || j<0)return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(lst[i+1]>lst[i])
    {
        int k=call(i+1,j);
        int l=call(i+1,j+1);
        dp[i][j]=ara[i][j]+max(k,l);
    }
    if(lst[i+1]<lst[i])
    {
        int k=call(i+1,j-1);
        int l=call(i+1,j);
        dp[i][j]=ara[i][j]+max(k,l);
    }
    return dp[i][j];
}
