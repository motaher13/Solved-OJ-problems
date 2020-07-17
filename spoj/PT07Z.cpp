#include<bits/stdc++.h>
using namespace std;
vector<int>vc[11000];
int level[11000],visited[11000]={0};
int mx=0,node;
void bfs(int src);
int main()
{
    int i,j,k,l,m,n,a,b;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d %d",&a,&b);
        vc[b].push_back(a);
        vc[a].push_back(b);
    }
    bfs(1);
    memset(visited,0,sizeof(visited));
    bfs(node);
    printf("%d\n",mx);
}
void bfs(int src)
{
    int i;
    visited[src]=1;
    level[src]=0;
    queue<int>q;
    q.push(src);
    mx=0;
    while(!q.empty())
    {
        int u=q.front();
        if(level[u]>mx){
            mx=level[u];
            node=u;}
        q.pop();
        for(i=0;i<vc[u].size();i++)
        {
            int v=vc[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                level[v]=level[u]+1;
                q.push(v);
            }
        }
    }
}
