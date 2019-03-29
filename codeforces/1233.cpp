#include<bits/stdc++.h>
using namespace std;
int dp[100100]={0},coin[110]= {0},cnt[110]={0},c,n,k;
void call(int i,int m);
int main()
{
    int i,j,l,m,t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        memset(dp,-1,sizeof dp);
        scanf("%d %d",&n,&k);
        for(i=1;i<=n;i++)
            scanf("%d",&coin[i]);
        for(i=1;i<=n;i++)
            scanf("%d",&cnt[i]);
        c=0;
        call(1,0);
        printf("Case %d: %d\n",cs,c-1);
    }

return 0;
}
void call(int i,int m)
{
    //printf("%d %d\n",i,m);
    if(i>n) return;

    if(m>k) return ;
    //if(dp[m]!=-1) return;

    for(int j=0;j<=cnt[i];j++)
    {
        if(m+coin[i]*j<=k){
                //if(dp[m*coin[i]*j]==-1){
            if(dp[m+coin[i]*j]==-1){
            dp[m+coin[i]*j]=1;
            c++;}
            call(i+1,m+coin[i]*j);}
        else
            break;
    }
}
