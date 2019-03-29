#include<bits/stdc++.h>
using namespace std;
int m,n,p[1010][2],e,ara[10000],ara1[10000];
struct edge
{
    int u,v,w;
    bool operator <(const edge&p) const
    {
        return w<p.w;
    }
};
vector<edge>gph;
int fp(int v)
{
    if(p[v][0]==v)
        return v;
    else
        return p[v][0]=fp(p[v][0]);
}
void track(int j)
{
    if(p[j][0]==j)
        return;
    else{
        ara[e]=p[j][1];
        e++;
        track(p[j][0]);}

}
void mst();
int main()
{
    int i,j,k,l,u,v,w;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;
        for(i=0;i<m;i++)
            p[i][0]=i;
        gph.clear();
        for(i=0;i<m;i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            edge t;
            t.u=u;
            t.v=v;
            t.w=w;
            gph.push_back(t);
        }
        sort(gph.begin(),gph.end());
        mst();
    }
    return 0;
}
void mst()
{
    int i,j,k,l,r,s,h=0;
    for(i=0;i<gph.size();i++)
    {
        r=fp(gph[i].u);
        s=fp(gph[i].v);

        if(r!=s){
            printf("r=1\n");
            p[s][0]=r;
            p[s][1]=gph[i].w;}
        else
        {
            printf("e=1\n");
            ara[0]=gph[i].w;
            e=1;
            track(gph[i].u);
            track(gph[i].v);
            sort(ara,ara+e);
            ara1[h]=ara[e-1];
            h++;
            //printf("%d ",ara[e-1]);
        }
    }
    printf("h=%d\n",h);
    if(h==0)
            printf("forest\n");
        else
        {
            sort(ara1,ara1+h);
            for(k=0;k<h;k++){
                if(k>0)
                printf(" ");
                printf("%d",ara1[k]);
                ara1[k]=0;}
        }
        printf("\n");

}

















