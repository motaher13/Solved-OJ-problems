#include<bits/stdc++.h>
using namespace std;
//int ara[110][3],n;
vector<int>vc[110];
void bfs(int m);
int mx,node,n;
int main()
{
    //freopen("1.txt","w",stdout);
    int i,j,k,l,m,t=0;

    while(scanf("%d",&n)==1)
    {
        t++;
        if(n==0) break;
        scanf("%d",&m);
        for(i=0;i<=100;i++)
            vc[i].clear();
        while(scanf("%d %d",&j,&k)==2)
        {
            if(j==0 && k==0)
                break;
            vc[j].push_back(k);
        }
        //memset(ara,0,sizeof ara);
        mx=0,node=0;
        bfs(m);
//        if(t>1)
//            printf("\n");
        printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",t,m,mx,node);

    }
    return 0;
}

void bfs(int m)
{
    int lp[110]={0};
    int vis[110]={0};
    queue<int>q;
    lp[m]=0;
    vis[m]=1;
    q.push(m);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        vis[u]=0;
        for(int i=0;i<vc[u].size();i++)
        {
            int v=vc[u][i];
            if(lp[u]+1>lp[v])
            {
                lp[v]=lp[u]+1;
                if(vis[v]==0)
                {
                    q.push(v);
                    vis[v]=1;
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
       // printf("%d %d\n",i,lp[i]);
        if(lp[i]>mx)
        {
            mx=lp[i];
            node=i;
        }
    }
}









