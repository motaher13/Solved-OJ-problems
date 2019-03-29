#include<bits/stdc++.h>
using namespace std;

int hole[3][3];
int dp[3][10000][10000];


int call(int p,int a,int b)
{
    if(p<0 || p>2) return 0;
    if (dp[p][a][b]!=-1) return dp[p][a][b];

    int c=a+hole[p][0];
    int d=b+hole[p][1];
    if(c<0 || d<0)
        return dp[p][a][b]=0;
    int m=0;

    for(int j=p+1;j<3;j++)
        m=max(m,call(j,c,d));
    for(int j=p-1;j>=0;j--)
        m=max(m,call(j,c,d));

    return dp[p][a][b]=m+1;
}


int main()
{
    int i,j,k,l,m,n,t,a,b;
    scanf("%d\n",&t);
    while(t--)
    {
        for(i=0;i<3;i++)
            scanf("%d %d",&hole[i][0],&hole[i][1]);

        scanf("%d %d",&a,&b);
        memset(dp,-1,sizeof(dp));
        m=0;
        for(i=0;i<3;i++)
            m=max(m,call(i,a,b));
        printf("%d\n",m);
    }
}
