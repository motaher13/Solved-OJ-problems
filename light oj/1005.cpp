#include<bits/stdc++.h>
using namespace std;
#define ul unsigned long long
ul ara[35][35];
int main()
{
    freopen("1.txt","w",stdout);
    ul i,j,k,l,m,n,t;
    for(i=0;i<=32;i++)
        for(j=0;j<=32;j++)
            ara[i][j]=1;
    for(i=1;i<=30;i++)
    {
        for(j=1;j<=i;j++)
        {
            ara[i][j]=ara[i-1][j-1]*i*i/j;
        }
    }
    scanf("%llu",&k);
    for(t=1;t<=k;t++)
    {
        scanf("%llu %llu",&n,&m);
        if(m>n) printf("Case %llu: 0\n",t);
        else
            printf("Case %llu: %llu\n",t,ara[n][m]);
    }
}
