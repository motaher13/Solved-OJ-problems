#include<bits/stdc++.h>
using namespace std;
int ara[1010][1010];
int lfs[1010][1010];
int m,n;

struct node
{
    int x,y,w;
    bool operator < (const node&p)const
    {
        return w>=p.w;
    }

};
int djkstra();
int main()
{
    int i,j,k,l,t,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&ara[i][j]);

        s=djkstra();
        printf("%d\n",s);
    }
    return 0;
}

int djkstra()
{
    int j,i;
    for(i=0;i<=n;i++)
        for(j=0;j<=m;j++)
            lfs[i][j]=10000000;
    lfs[0][0]=ara[0][0];

    priority_queue<node>q;
    node yy;
    yy.x=0;
    yy.y=0;
    yy.w=lfs[0][0];
    q.push(yy);

    while(!q.empty())
    {
        node u=q.top();
        q.pop();
        if(u.x==n-1 && u.y==m-1)
            return u.w;

        if(u.y>0)
        {
            node v;
            v.x=u.x;
            v.y=u.y-1;
            if(lfs[v.x][v.y]>lfs[u.x][u.y]+ara[v.x][v.y])
            {
                lfs[v.x][v.y]=lfs[u.x][u.y]+ara[v.x][v.y];
                v.w=lfs[v.x][v.y];
                q.push(v);
            }
        }
        if(u.x<n-1)
        {
            node v;
            v.x=u.x+1;
            v.y=u.y;
            if(lfs[v.x][v.y]>lfs[u.x][u.y]+ara[v.x][v.y])
            {
                lfs[v.x][v.y]=lfs[u.x][u.y]+ara[v.x][v.y];
                v.w=lfs[v.x][v.y];
                q.push(v);
            }
        }
        if(u.y<m-1)
        {
            node v;
            v.x=u.x;
            v.y=u.y+1;
            if(lfs[v.x][v.y]>lfs[u.x][u.y]+ara[v.x][v.y])
            {
                lfs[v.x][v.y]=lfs[u.x][u.y]+ara[v.x][v.y];
                v.w=lfs[v.x][v.y];
                q.push(v);
            }
        }
        if(u.x>0)
        {
            node v;
            v.x=u.x-1;
            v.y=u.y;
            if(lfs[v.x][v.y]>lfs[u.x][u.y]+ara[v.x][v.y])
            {
                lfs[v.x][v.y]=lfs[u.x][u.y]+ara[v.x][v.y];
                v.w=lfs[v.x][v.y];
                q.push(v);
            }
        }
    }
    return -1;
}















