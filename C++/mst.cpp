#include<bits/stdc++.h>
using namespace std;
int par[1000],m,n,s;
struct edge
{
    int u,v,w;
    bool operator < (const edge&p)const{
        return w<p.w;}
};
vector<edge>graph;
int find_par(int v)
{
    if(par[v]==v)
        return v;
    else
        return par[v]=find_par(par[v]);
}
int mst();
int main()
{
    int i,j,k,l,u,v,w;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d %d %d",&u,&v,&w);
        edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        graph.push_back(get);

    }
    mst();
    printf("%d",s);
    return 0;
}

int mst()
{
    int i,j,k,l,p,q,c;
    for(i=0;i<n;i++)
        par[i]=i;
    sort(graph.begin(),graph.end());
    c=0,s=0;
    for(i=0;i<graph.size();i++)
    {
        p=find_par(graph[i].u);
        q=find_par(graph[i].v);
        if(p!=q)
        {
            par[q]=p;
            c++;
            s=s+graph[i].w;
            if(c==n-1)
                break;
        }
    }
}













