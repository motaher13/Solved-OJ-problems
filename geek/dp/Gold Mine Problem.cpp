#include<bits/stdc++.h>
using namespace std;
int m,n,ara[25][25],dp[25][25],ans;


int call(int r,int c)
{
    if(r<0 || r>=n || c<0 || c>=m) return 0;
    if(dp[r][c]!=-1) return dp[r][c];

    int a=call(r-1,c+1);
    int b=call(r,c+1);
    int e=call(r+1,c+1);
    dp[r][c]=max(a,max(b,e))+ara[r][c];
    return dp[r][c];
}

int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&ara[i][j]);

        memset(dp,-1,sizeof(dp));
        ans=0;
        for(i=0;i<n;i++)
            ans=max(ans,call(i,0));

        printf("%d\n",ans);
    }

}
