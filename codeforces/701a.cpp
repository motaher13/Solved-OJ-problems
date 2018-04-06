#include<bits/stdc++.h>
using namespace std;
int ara[110],visited[110]={0};
int main()
{
    int i,j,k,l,m,n,mx=0,mn=100000;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
        mx=max(mx,ara[i]);
        mn=min(mn,ara[i]);
    }
    int s=mx+mn;
    for(i=1;i<=n;i++)
    {
        l=s-ara[i];
        for(j=i+1;j<=n;j++)
        {
            if(j==i || visited[i]==1 || visited[j]==1)
                continue;
            if(ara[j]==l)
            {
                printf("%d %d\n",i,j);
                visited[j]=1;
                    break;
            }
        }
    }

return 0;
}
