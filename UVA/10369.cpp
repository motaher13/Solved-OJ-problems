#include<bits/stdc++.h>
using namespace std;
int par[1000],m,n,ch;
double ara[600][4],s;
int st[600];
struct edge
{
    int u,v;
    double w;
    bool operator < (const edge&p)const
    {
        return w<p.w;
    }
};
vector<edge>graph;
vector<edge>store;
int find_par(int v)
{
    if(par[v]==v)
        return v;
    else
        return par[v]=find_par(par[v]);
}

int mst()
{
    int i,j,k,l,p,q,c;
    for(i=1; i<=n; i++)
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
            edge get;

            store.push_back(graph[i]);

            if(c==n-1)
                break;
        }
    }
}

int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&ch,&n);
        for(i=1; i<=n; i++)
            scanf("%lf %lf",&ara[i][0],&ara[i][1]);

        graph.clear();
        store.clear();
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {

                double z=(ara[i][0]-ara[j][0])*(ara[i][0]-ara[j][0]);
                double y=(ara[i][1]-ara[j][1])*(ara[i][1]-ara[j][1]);
                z=y+z;
                z=sqrt(z);
                edge get;
                get.u=i;
                get.v=j;
                get.w=z;
                graph.push_back(get);
            }
        }
        mst();

        sort(store.begin(),store.end());

        for(i=1; i<=n; i++)
            st[i]=0;
        if(ch>1)
        {
            for(i=store.size()-1; ch>0; i--)
            {
                int u=store[i].u;
                int v=store[i].v;
                if(st[u]==0 && st[v]==0)
                {
                    if(ch>=2)
                    {
                        store.pop_back();
                        st[u]=1;
                        st[v]=1;
                        ch=ch-2;
                    }
                }
                else if(st[u]==0 || st[v]==0)
                {
                    if(ch>=1)
                    {
                        store.pop_back();
                        if(st[u]==0)
                            st[u]=1;
                        else if(st[u]==0)
                            st[v]=1;
                        ch--;
                    }
                }
                else
                    break;
            }

        }
        i=store.size();
        printf("%.2lf\n",store[i-1].w);

    }
    return 0;
}












