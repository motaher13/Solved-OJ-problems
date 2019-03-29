#include <bits/stdc++.h>
using namespace std;

 struct node
 {
     int vtx,w;
     bool operator < (const node&p) const
     {
         return w>p.w;
     }
 };

 vector<int>vc[100010];
 vector<int>cst[100010];
 int par[100010],lfs[100010];
int djkstra(int a,int b)
{
    lfs[a]=0;
    par[a]=a;

    priority_queue<node>q;
    node n;
    n.vtx=a;
    n.w=0;
    q.push(n);
    while(!q.empty())
    {
        node u=q.top();
        q.pop();
        int z=u.vtx;
        if(z==b) return lfs[z];
        for(int i=0;i<vc[z].size();i++)
        {
            int v=vc[z][i];
            if(lfs[v]>lfs[z]+cst[z][i])
            {
                lfs[v]=lfs[z]+cst[z][i];
                par[v]=z;
                n.vtx=v;
                n.w=lfs[v];
                q.push(n);
            }
        }
    }

    return -1;
}




int main()
{
    int i,j,k,l,m,n,u,v,w;
    scanf("%d %d",&n,&m);

    for(i=0;i<=n;i++)
        lfs[i]=INT_MAX;

    for(i=0;i<m;i++)
    {
        scanf("%d %d %d",&u,&v,&w);
        vc[u].push_back(v);
        vc[v].push_back(u);
        cst[u].push_back(w);
        cst[v].push_back(w);
    }

    j=djkstra(1,n);
    printf("%d",j);

}
