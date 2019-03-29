#include<bits/stdc++.h>
using namespace std;
int ara[110],dp[110];
int n;
int call(int p,int r)
{
//    printf("%d %d\n",p,r);

    if(p>n) return 0;


    if(dp[p]==0)
    {
        int s=0;
        for(int i=p+1; i<n; i++)
            s=max(s,call(i,ara[p]));
        dp[p]=s;

    }
    if(ara[p]%r!=0) return 0;
    return dp[p]+1;

}
int main()
{
    int i,j,k,l,m,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);

        sort(ara,ara+n);
        memset(dp,0,sizeof(dp));
        i=call(0,1);
        i=0;
        for(j=0;j<n;j++)
            if(dp[j]>i)
                i=dp[j];

        printf("%d\n",i+1);
    }
}

