#include<bits/stdc++.h>
using namespace std;

#define sf(x) scanf("%d",&x)
#define pf(x) printf("%d\n",x)
typedef long long sll;
#define sfl(x) scanf("%lld",&x)
#define pfl(x) printf("%lld\n",x)
#define mod 100000007

int n , K;
int dp[55][1004];
int coin[55];
int mtake[55];

int change (int i , int ase)
{
    if (i >= n)
    {
        if (ase == K) return 1;
        else return 0;
    }
    if (ase > K) return 0;
//if (ase == K) return 1;
    if (dp[i][ase] != -1) return dp[i][ase];
    int tt = 0;
    for (int ii = 1; ii <= mtake[i]; ii++)
    {
        if (ase + coin[i] * ii <= K)
            tt += change (i + 1 , ase + coin[i] * ii) % mod;
        else break;
    }
    tt += change (i + 1 , ase) % mod;
    dp[i][ase] = tt % mod;
    return dp[i][ase];
}

int main ()
{
    int T;
    scanf ("%d" , &T);
    int i;
    for (i = 1; i <= T; i++)
    {
        memset (dp , -1 , sizeof (dp));
        scanf ("%d%d" , &n , &K);
        for (int ii = 0; ii < n; ii++)
            scanf ("%d" , &coin[ii]);
        for (int ii = 0; ii < n; ii++)
            scanf ("%d" , &mtake[ii]);
        printf ("Case %d: %d\n" , i , change (0 , 0) % mod);
    }
}
