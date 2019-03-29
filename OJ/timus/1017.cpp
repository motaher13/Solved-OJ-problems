#include<bits/stdc++.h>
using namespace std;
int call(int m,int k),dp[600]={-1},n,d;
int main()
{
    int i,j,k,l,t;
    scanf("%d",&n);
    memset(dp,-1,sizeof dp);
    j=call(0,0);
    printf("ans %d\n",j);
}
int call(int m,int k)
{
    printf("%d %d\n",m,k);
    if(m>n) return 0;
    if(m==n) return 1;
    if(dp[m]!=-1) return dp[m];
    int j=0;
    d=m;
    for(int i=k+1;d+i<=n;i++)
    {
        //printf("s=%d %d %d\n",m,d,i);
        j+=call(d+i,i);
    }
    dp[m]=j;

    return dp[m];
}
