#include<bits/stdc++.h>
using namespace std;
vector<int>vc[2600];
void bfs(int src);
int visited[2600]={0},level[2600],parent[2600],aa[2600],n;
int main()
{
    //freopen("q.txt","w",stdout);
    int i,j,k,m,a,b,r,c,t;

    while(scanf("%d",&n)==1)
    {
        for(i=0;i<=n;i++)
            vc[i].clear();
        for(i=0; i<n; i++)
        {
            scanf("%d",&m);
            for(j=0;j<m;j++)
            {
                scanf("%d",&r);
                vc[i].push_back(r);
            }
        }
        scanf("%d",&t);
        for(i=0;i<t;i++)
        {
            int c;
            scanf("%d",&c);
            bfs(c);
            int mx=0;
            for(j=1;aa[j]!=0;j++)
            {
                if(aa[j]>aa[mx])
                    mx=j;
            }
            if(aa[mx]==0)
                printf("0\n");
            else
            printf("%d %d\n",aa[mx],mx);
        }
    }
    return 0;

}

void bfs(int src)
{
    int i;
    for(int i=0;i<=n;i++)
    {
        aa[i]=0;
        visited[i]=0;
        level[i]=0;
        parent[i]=0;
    }
    queue<int>q;
    visited[src]=1;
    level[src]=0;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        for(i=0;i<vc[u].size();i++)
        {
            int v=vc[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                level[v]=level[u]+1;
                aa[level[v]]++;
                parent[v]=u;
                q.push(v);
            }
        }
        q.pop();
    }



}

