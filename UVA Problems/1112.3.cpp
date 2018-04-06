#include<bits/stdc++.h>
using namespace std;
vector<int>vc[300];
vector<int>cost[300];
int lfs[300],par[300];
int m,n;
struct node
{
    int vtx,wght;
    bool operator < (const node&p)const
    {
        return wght>=p.wght;
    }
};
int djkstra(int a,int b);
int main()
{
    int i,j,k,l,u,v,w,a,b,e,t,r;



    scanf("%d",&r);
    for(j=1;j<=r;j++)
    {
        scanf("%d %d %d %d",&n,&e,&t,&m);

        for(i=0;i<=n;i++)
        {
            vc[i].clear();
            cost[i].clear();
        }
        for(i=0;i<m;i++)
        {
            scanf("%d %d %d",&u,&v,&w);

            vc[v].push_back(u);

            cost[v].push_back(w);
        }
        int c=0;

        k=djkstra(e,n);
        for(i=1;i<=n;i++)
            if(lfs[i]<=t)
                c++;


        printf("%d\n",c);
        if(j<r)cout<<endl;

    }
    return 0;
}

int djkstra(int a,int b)
{
    for(int i=0;i<=n;i++)
        lfs[i]=2147483647;

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
        for(int i=0;i<vc[u.vtx].size();i++)
        {
            int v=vc[u.vtx][i];

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
    return 2147483647;

}



















