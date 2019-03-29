#include<bits/stdc++.h>
using namespace std;
int n,m,par[1010];
double a[500000][3];
double s,tt,st;
struct edge
{
    int u,v;
    double w;
    bool operator <(const edge&p) const
    {
        return w<p.w;
    }
};
vector<edge>gph;
int fnd_par(int v)
{
    if(par[v]==v)
        return v;
    else
        return par[v]=fnd_par(par[v]);
}
void mst();
int main()
{
    int i,j,k,l,r,b,c,d;
    scanf("%d",&r);
    for(b=1;b<=r;b++)
    {
        gph.clear();
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++)
            scanf("%lf %lf",&a[i][0],&a[i][1]);
        for(i=1;i<n;i++)
            for(j=i+1;j<=n;j++)
        {
            double e,f,w;
            e=(a[i][0]-a[j][0])*(a[i][0]-a[j][0]);
            f=(a[i][1]-a[j][1])*(a[i][1]-a[j][1]);
            w=sqrt(e+f);
            edge t;
            t.u=i;
            t.v=j;
            t.w=w;
            gph.push_back(t);
        }
        mst();
        printf("Case #%d: %.0lf %.0lf %.0lf\n",b,st+1,s,tt);
    }
    return 0;
}

void mst()
{
    int i,j,k,l;
    sort(gph.begin(),gph.end());
    for(i=1;i<=n;i++)
        par[i]=i;
    int c=0;
    s=0,tt=0,st=0;

    for(i=0;i<gph.size();i++)
    {
        int p,q;
        p=fnd_par(gph[i].u);
        q=fnd_par(gph[i].v);
        if(p!=q)
        {
            par[q]=p;
            c++;
            if(gph[i].w>m){
                tt=tt+gph[i].w;
                st=st+1;}
            else
            s=s+gph[i].w;
            if(c==n-1)
                return;
        }
    }
}


