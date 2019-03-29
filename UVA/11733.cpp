#include<bits/stdc++.h>
using namespace std;

struct uu
{
    int node;
    int dc;
};
int par[20000],m,n,s,a;
vector<uu>vc[20000];
int ara[20000];

struct edge
{
    int u,v,w;
    bool operator < (const edge&p)const
    {
        return w<p.w;
    }
};

vector<edge>graph;

int find_par(int v)
{
    if(par[v]==v)
        return v;
    else
        return par[v]=find_par(par[v]);
}

int mst(int yy);

void dfs(int i)
{
    int n;
    if(ara[i]==1)
        return;
    ara[i]=1;
    for(int j=0; j<vc[i].size(); j++)
    {
        int n=vc[i][j].node;
        if(vc[i][j].dc<a)
            dfs(n);
    }
}

int main()
{
    int i,j,k,l,u,v,w,t,e;
    scanf("%d",&t);
    for(e=1; e<=t; e++)
    {
        scanf("%d %d %d",&n,&m,&a);
        for(i=0;i<=n;i++)
            vc[i].clear();
        graph.clear();
        for(i=0; i<m; i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            uu vv;
            vv.node=v;
            vv.dc=w;
            vc[u].push_back(vv);
            vv.node=u;
            vv.dc=w;
            vc[v].push_back(vv);
            edge get;
            get.u=u;
            get.v=v;
            get.w=w;
            graph.push_back(get);

        }
        int count=0;
        for(i=0; i<=n; i++)
            ara[i]=0;
        for(i=1; i<=n; i++)
            if(ara[i]!=1)
            {
                dfs(i);
                count++;
            }
        int yy=count;
        mst(yy);
        s=s+yy*a;
        printf("Case #%d: %d %d\n",e,s,yy);
    }

    return 0;
}

int mst( int yy)
{
    int i,j,k,l,p,q,c;
    for(i=0; i<n; i++)
        par[i]=i;
    sort(graph.begin(),graph.end());
    c=0,s=0;
    for(i=0; i<graph.size(); i++)
    {
        p=find_par(graph[i].u);
        q=find_par(graph[i].v);
        if(p!=q)
        {
            par[q]=p;
            c++;
            s=s+graph[i].w;
            if(c==n-yy)
                break;
        }
    }
}

