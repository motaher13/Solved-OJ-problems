#include<bits/stdc++.h>
using namespace std;
vector<long long>vc[100100];
vector<long long>cost[100100];
long long lfs[100100],par[100100];
long long m,n;
long long ara[100100];
struct node
{
    long long vtx,wght;
    bool operator < (const node&p)const
    {
        return wght>=p.wght;
    }
};
long long djkstra(long long a,long long b);
int main()
{
    long long i,j,k,l,u,v,w,a,b;


    scanf("%lld %lld",&n,&m);
    for(i=0; i<=n; i++)
    {
        vc[i].clear();
        cost[i].clear();
    }
    for(i=0; i<m; i++)
    {
        scanf("%lld %lld %lld",&u,&v,&w);
        vc[u].push_back(v);
        vc[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }

    k=djkstra(1,n);
    i=n;

    if(k==-1)
        printf("no way\n");
    else
    {
        i=n,j=0;
        while(par[i]!=i)
        {
            ara[j]=i;
            j++;
            i=par[i];
        }

        ara[j]=i;
        for(i=j;i>=0;i--)
            printf("%lld ",ara[i]);
        printf("\n");

    }



    return 0;
}

long long djkstra(long long a,long long b)
{
    for(long long i=0; i<=n; i++)
        lfs[i]=10000;
    lfs[a]=0;
    par[a]=a;

    priority_queue<node>q;
    node yy;
    yy.vtx=a;
    yy.wght=0;
    q.push(yy);
    while(!q.empty())
    {
        node u=q.top();
        q.pop();
        if(u.vtx==b)
            return lfs[u.vtx];
        for(long long i=0; i<vc[u.vtx].size(); i++)
        {
            long long v=vc[u.vtx][i];
            if(lfs[v]>lfs[u.vtx]+cost[u.vtx][i])
            {
                lfs[v]=lfs[u.vtx]+cost[u.vtx][i];
                par[v]=u.vtx;
                yy.vtx=v;
                yy.wght=lfs[v];
                q.push(yy);
            }
        }
    }
    return -1;

}


















