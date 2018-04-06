#include<bits/stdc++.h>
using namespace std;
int lt[10][5],lc[10][200],ch[10][200],l,lfs[200],par[200];
char str[100000];
struct node
{
    int vtx,wght;
    bool operator < (const node&p)const
    {
        return wght>=p.wght;
    }
};
void djkstra(int a,int b);
int bs(int n,int i)
{
    int p=0,q=lt[i][1],k;
    while(p<=q)
    {
        k=(p+q)/2;
        if(lc[i][k]==n)
            return k;
        else if(n<lc[i][k])
            q=k-1;
        else if(n>lc[i][k])
            p=k+1;
    }
    return 0;
}
int main()
{
    int i,j,k,m,n,p,q,r,t,c,u,v,e;
    while(scanf("%d %d",&l,&e)==2)
    {
        for(i=1; i<=l; i++)
            scanf("%d",&lt[i][0]);
        getchar();
        for(i=1; i<=l; i++)
        {
            gets(str);
            stringstream ss(str);
            j=0;
            for(j=0;j<10;j++)
                for(k=0;k<200;k++)
                    ch[j][k]=0;
            while(ss>>lc[i][j]){
                //ch[i][j]=1;
                j++;}

           lt[i][1]=j;
        }

        djkstra(0,e);
        printf("%d\n",lfs[e]);
    }

}
void djkstra(int a,int b)
{
    for(int i=0; i<=120; i++)
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
            return;
        for(int k=1; k<=l; k++)
        {
            int t=bs(u.vtx,k);
            if(t>=)
                for(int i=t+1; i<lt[k][1]; i++)
                {
                    int v=lc[k][i];

                    if(lfs[v]>lfs[u.vtx]+60+(v-u.vtx)*lt[k][0])
                    {

                        lfs[v]>lfs[u.vtx]+60+(v-u.vtx)*lt[k][0];
                        par[v]=u.vtx;
                        yy.vtx=v;
                        yy.wght=lfs[v];
                        q.push(yy);
                    }
                }
        }

    }
    return;

}
