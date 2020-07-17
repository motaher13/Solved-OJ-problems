#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
const long long inf = 10000000000000LL;
vector<int>vc[500010],cost[500010],out;
int par[500010],cou=0;
int num;
long long des;

struct node
{

    int vertex;
    long long dist;
    bool operator < (const node& p) const
    {
        return dist > p.dist;
    }
};
long long d[500010];
void djks(int p,int l)
{
    priority_queue<node>q;
    node u,v;
    int i,j,k,n;
    long long m;
    for(i=0; i<=num; i++)
    {
        d[i]=inf;
        par[i]=-1;
    }
    u.vertex=p;
    u.dist=0;
    q.push(u);
    d[p]=0;
    while(!q.empty())
    {
        u=q.top();

        if(u.vertex==l)break;
        q.pop();
        m=d[u.vertex];
        if(u.dist==d[u.vertex])
            for(i=0; i<vc[u.vertex].size(); i++)
            {

                v.vertex=vc[u.vertex][i];
                v.dist=m+cost[u.vertex][i];
                if(v.dist<d[v.vertex])
                {
                    d[v.vertex]=v.dist;
                    par[v.vertex]=u.vertex;
                    q.push(v);
                }
            }
    }
    des=d[l];
}
int main()
{
    int n,m,i,j,k,l,p,e,q,t,r=1;
    scanf("%d",&t);
    while(t--){
    scanf("%d%d%d%d",&num,&m,&p,&q);
    for(i=0; i<=num; i++)
    {
        vc[i].clear();
        cost[i].clear();
    }
    out.clear();
    for(i=1; i<=m; i++)
    {
        scanf("%d%d%d",&k,&l,&j);
        if(k!=l)
        {
            vc[k].push_back(l);
            vc[l].push_back(k);
            cost[k].push_back(j);
            cost[l].push_back(j);
        }
    }

    djks(p,q);
    printf("Case #%d: ",r++);
    if(des==inf)printf("unreachable");
    else printf("%d",des);
    printf("\n");
    }
    return 0;
}
