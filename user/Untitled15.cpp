#include<bits/stdc++.h>
using namespace std;
vector<int>vc[100];
vector<int>cost[100];

struct node
{
    int vertex,wght;
    bool operator < (const node&p)const
    {
        return wght>=p.wght;
    }
};
int djk(int a,int b);
int main()
{
    int i,j,k,l,m,n;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        int u,v,w;
        scanf("%d %d %d",&u,&v,&w);
        vc[u].push_back(v);
        vc[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }
    int a,b;
    scanf("%d %d",&a,&b);
    k=djk(a,b);
    if(k==-1)
        printf("no path");
    else
        printf("%d\n",k);
}
int djk(int a,int b)
{
    int i;
    int lfs[100],par[100];
    memset(lfs,10000,sizeof lfs);
    lfs[a]=0;

    priority_queue<node>q;
    node yy;
    yy.vertex=a;
    yy.wght=0;
    q.push(yy);

    while(!q.empty())
    {
        node u=q.top();
        q.pop();

        if(u.vertex==b)
            return lfs[u.vertex];

        for(int i=0;i<vc[u.vertex].size();i++)
        {
            int v=vc[u.vertex][i];
            if(lfs[v]>lfs[u.vertex]+cost[u.vertex][i])
            {
                lfs[v]=lfs[u.vertex]+cost[u.vertex][i];
                par[v]=u.vertex;
                yy.vertex=v;
                yy.wght=lfs[v];
                q.push(yy);
            }
        }
    }
    return -1;

}











