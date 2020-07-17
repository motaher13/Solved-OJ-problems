#include<bits/stdc++.h>
using namespace std;

int par[1000],m,n,s;
vector<int>vc[100];
int ara[100];

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

int mst(int yy);

void dfs(int i)
{
    int n;
    if(ara[i]==1)
        return;
    ara[i]=1;
    for(int j=0;j<vc[i].size();j++){
        int n=vc[i][j];
        dfs(n);}
}

int main()
{
    int i,j,k,l,u,v,w;
    scanf("%d %d",&n,&m);

    for(i=0;i<m;i++)
    {
        scanf("%d %d %d",&u,&v,&w);
        vc[u].push_back(v);
        vc[v].push_back(u);
        edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        graph.push_back(get);

    }
    int count=0;
    for(i=0;i<100;i++)
        ara[i]=0;
    for(i=1;i<=n;i++)
        if(ara[i]!=1)
        {
            dfs(i);
            count++;
        }
    printf("%d\n",count);
    int yy=count;
    mst(yy);
    printf("%d",s);
    return 0;
}

int mst( int yy)
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
            if(c==n-yy)
                break;
        }
    }
}

