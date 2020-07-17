#include<bits/stdc++.h>
using namespace std;

int node[1010]={0},n,level[1010];
vector<int>vc[1010];


void bfs()
{
    int i,parent[1010],visited[1010]={0};
    queue<int>q;

    visited[1]=0,parent[1]=1,level[1]=0;
    q.push(1);
    while(!q.empty())
    {
        int u=q.front();
        for(i=0;i<vc[u].size();i++)
        {
            int v=vc[u][i];
            if(!visited[v])
            {
                parent[v]=u;
                level[v]=level[u]+1;
                visited[v]=1;
                q.push(v);
            }

        }
        q.pop();
    }
}

int main()
{
    int i,j,k,u,v,q,mx=INT_MAX,nd;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d %d",&u,&v);
        vc[u].push_back(v);
        vc[v].push_back(u);
    }

    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&k);
        if(level[k]<mx)
            mx=level[k],nd=k;
        if(level[k]==mx)
            nd=min(nd,k);
    }

    printf("%d\n",nd);


}
