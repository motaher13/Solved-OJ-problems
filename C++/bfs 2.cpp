#include<bits/stdc++.h>
using namespace std;
vector<int>vc[100];
void bfs(int n,int src);
int main()
{
    int i,j,k,m,n,a,b,r,c,t;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {

        scanf("%d %d",&n,&m);
        for(i=0;i<=n;i++)
            vc[i].clear();
        for(i=0; i<m; i++)
        {
            scanf("%d %d",&r,&c);
            vc[r].push_back(c);
            vc[c].push_back(r);
        }
        scanf("%d %d",&a,&b);
        bfs(a,b);
    }

}

void bfs(int src,int n)
{
    int i;
    queue<int>q;
    int visited[100]={0},level[100],parent[100];
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
                parent[v]=u;
                q.push(v);
            }
        }
        q.pop();
    }
    for(i=1;i<=n;i++)
        printf("%d to %d distance %d\n",src,i,level[i]);


}
/*i=7;
    while(i!=src)
    {
        printf("%d ",parent[i]);
        i=parent[i];
    }*/

