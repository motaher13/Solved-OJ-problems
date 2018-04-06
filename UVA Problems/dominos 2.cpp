#include<bits/stdc++.h>
using namespace std;
vector<int>v[20000];
int ara[20000],d[20000];
int cnt=0;
void dfs(int n)
{
    if(ara[n]==1) return;
    int i;
    ara[n]=1;
    cnt++;
    for(i=0;i<v[n].size();i++)
        dfs(v[n][i]);
}

int main()
{
    int i,j,k,l,m,n,a,b,r,c,t;


    scanf("%d",&t);
    while(t--)
    {

        scanf("%d %d %d",&a,&b,&l);
        for(i=0; i<b; i++)
        {
            scanf("%d %d",&r,&c);
            v[r].push_back(c);
        }
        for(i=0; i<l; i++)
            scanf("%d",&d[i]);
        cnt=0;
        memset(ara,0,sizeof ara);
        for(i=0; i<l; i++)
        {
            n=d[i];
            if(ara[n]==0)
                dfs(n);
        }

        printf("%d\n",cnt);
        for(i=0;i<=a;i++)
            v[i].clear();
    }
    return 0;
}
