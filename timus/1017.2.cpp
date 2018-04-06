#include<bits/stdc++.h>
using namespace std;
int dp[600]={0};
int n;
int call(int m,int k);
int main()
{
    int i,j,k,l,m;
    scanf("%d",&n);
    j=call(0,0);
    printf("%d\n",j);
}
int call(int m,int k)
{

    if(m==n) return 1;
    if(dp[m]!=0) return dp[m];
    int j=0;
    printf("%d %d\n",m,k);
    for(int i=k+1;i+m<=n;i++)
    {
        printf("m=%d %d\n",m,k);
        j=j+call(m+i,i);

    }
    dp[m]=j;
    return dp[m];
}
