#include<bits/stdc++.h>
using namespace std;

int w[1010];
int p[1010];
int dp[1010][40]={0};
int cap,n;

int fun(int i,int wt)
{
    if(i>=n)
        return 0;
    int profit1,profit2;
    if(dp[i][wt]==0)
    {
        profit1=(wt-w[i]>=0)? (p[i]+fun(i+1,wt-w[i])):0;
        profit2=fun(i+1,wt);
        dp[i][wt]=max(profit1,profit2);
    }
    return dp[i][wt];
}


int main()
{

    int i,j,k,l,m,q,t,g;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d %d",&p[i],&w[i]);
        for(i=0;i<n;i++)
            for(j=0;j<35;j++)
                dp[i][j]=0;

        scanf("%d",&g);
        int s=0;
        for(i=0;i<g;i++)
        {
            scanf("%d",&cap);
            s+=fun(0,cap);


        }
        printf("%d\n",s);
    }

}
