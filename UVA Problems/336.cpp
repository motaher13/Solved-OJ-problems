#include<bits/stdc++.h>
using namespace std;
vector<int>g[100];

int bfs(int n,int src);
int d;
int main()
{
    int i,j,k,n,a,b,r,c,l=0,p,q,x;
    while(scanf("%d",&b)==1)
    {
        if(b==0)
            break;
        for(i=0;i<100;i++)
            g[i].clear();
        map<int,int>m;
        d=1;
        for(i=0; i<b; i++)
        {
            scanf("%d %d",&r,&c);
            if(m[r]==0){
                m[r]=d;

                d++;}
            if(m[c]==0){
                m[c]=d;

                d++;}

            g[m[r]].push_back(m[c]);
            g[m[c]].push_back(m[r]);

        }

        while(scanf("%d %d",&p,&q)==2)
        {
            if(p==0 && q==0)
                break;
            l++;
            x=bfs(m[p],q);
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",l,d-x-1,p,q);


        }

    }


return 0;
}

int bfs(int src,int n)
{
    int i,j=0;
    queue<int>q;
    int level[100]={0};
    for(i=0;i<100;i++)
        level[i]=2147483647;
    int visited[100]={0},parent[100];
    visited[src]=1;
    level[src]=0;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        for(i=0;i<g[u].size();i++)
        {
            int v=g[u][i];
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
    j=0;
    for(i=1;i<d;i++)
        if(level[i]<=n)
            j++;
    return j;


}
