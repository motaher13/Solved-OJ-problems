#include<bits/stdc++.h>
using namespace std;
///#define max(a,b) ((a)>(b)?(a):(b))
///#define min(a,b) ((a)<(b)?(a):(b))
#define sci(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a)
#define scu(a) scanf("%llu",&a)
#define scs(a) scanf("%s",a)
#define pri(a) printf("%d",a)
#define prl(a) printf("%lld",a)
#define pru(a) printf("%llu",a)
#define newline puts("")
#define space printf(" ")
#define CS(cs) printf("Case %d: ",++cs)
#define mod 100000007
typedef unsigned long long int u64;
typedef long long int ll;
typedef unsigned int i32;
int ts,cs=0,n,k,a[101],c[101];
int dp[101][10011];
int main()
{
    sci(ts);
    while(ts--)
    {
        sci(n),sci(k);
        for(int i=1; i<=n; i++) sci(a[i]);
        for(int i=1; i<=n; i++) sci(c[i]);
        memset(dp,0,sizeof dp);
        dp[0][0]=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<=k; j++)
            {
                for(int l=0; j+l*a[i]<=k&&l<=c[i]; l++)
                {
                    dp[i][j+l*a[i]]+=dp[i-1][j];
                    dp[i][j+l*a[i]]%=mod;
                }
            }
        }
        CS(cs),pri(dp[n][k]),newline;
    }
    return 0;
}
