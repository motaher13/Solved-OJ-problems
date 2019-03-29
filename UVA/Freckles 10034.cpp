#include<bits/stdc++.h>
using namespace std;
int m,n,par[200];
struct edge
{
    int u,v;
    double w;
    bool operator < (const edge&p) const
    {
        return w<p.w;
    }
};
vector<edge>grph;
int fnd_par(int v)
{
    if(par[v]==v)
        return v;
    else
        return par[v]=fnd_par(par[v]);
}
double mst()
{
    int p,q,i,c=0;
    double s=0;
    sort(grph.begin(),grph.end());
    for(i=1; i<=n; i++)
        par[i]=i;
    for(i=0; i<grph.size(); i++)
    {
        p=fnd_par(grph[i].u);
        q=fnd_par(grph[i].v);
        if(p!=q)
        {
            par[q]=p;
            c++;
            s=s+grph[i].w;

            if(c==n-1)
                break;
        }
    }
    return s;
}
int main()
{
    int i,j,k,l,u,v,w,r;
    double a[200][5];
    scanf("%d",&r);
    int hh;
    for(hh=1;hh<=r;hh++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%lf %lf",&a[i][0],&a[i][1]);

        grph.clear();

        for(i=1; i<n; i++)
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
            grph.push_back(t);

        }
        double w=mst();
        if(hh>1)
            printf("\n");
        printf("%.2lf\n",w);
    }
    return 0;
}
