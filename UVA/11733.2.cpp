#include<bits/stdc++.h>
using namespace std;

struct uu
{
    int node;
    int dc;
};
int par[20000],m,n,s,a;

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
    if(par[v]==v)return v;
    else return par[v]=find_par(par[v]);
}

int mst();


int main()
{
    int i,j,k,l,u,v,w,t,e;
    scanf("%d",&t);
    for(e=1; e<=t; e++)
    {
        scanf("%d %d %d",&n,&m,&a);

        graph.clear();
        for(i=0; i<m; i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            edge get;
            get.u=u;
            get.v=v;
            get.w=w;
            graph.push_back(get);

        }

        mst();
        int yy=0;
        for(i=1;i<=n;i++)
            if(par[i]==i)
                yy++;
        s=yy*a+s;
        printf("Case #%d: %d %d\n",e,s,yy);
    }

    return 0;
}

int mst()
{
    int i,j,k,l,p,q,c;
    for(i=0; i<=n; i++)
        par[i]=i;
    sort(graph.begin(),graph.end());
    c=0,s=0;
    for(i=0; i<graph.size(); i++)
    {
        p=find_par(graph[i].u);
        q=find_par(graph[i].v);
        if(p!=q)
        {
            if(graph[i].w>=a)
                return 0;
            par[q]=p;
            c++;
            s=s+graph[i].w;
            if(c==n-1)
                break;
        }
    }
}
