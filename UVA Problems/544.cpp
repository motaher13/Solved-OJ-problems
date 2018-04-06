#include<bits/stdc++.h>
using namespace std;
struct edge
{
    int u,v,w;
    bool operator < (const edge&p)const
    {
        return w>p.w;
    }
};
vector<edge>grph;
int par[300],n,s,d,c;
int fp(int v)
{
    if(par[v]==v)
        return v;
    else
        return par[v]=fp(par[v]);
}
void mst();
int main()
{
    int i,j,k,l,m,r,e;
    char s1[40],s2[40];
    map<string,int>y;
    while(scanf("%d %d",&n,&r)==2)
    {
        getchar();
        if(n==0 || r==0)
            break;
        d=0;
        printf("%d %d\n",n,r);
        for(i=0;i<r;i++)
        {
            scanf("%s %s %d",s1,s2,&e);

            if(y[s1]==0){
                y[s1]=d;
                d++;}
            if(y[s2]==0){
                y[s2]=d;
                d++;}

            edge get;
            get.u=y[s1];
            get.v=y[s2];
            get.w=e;
            grph.push_back(get);
        }
        scanf("%s %s",s1,s2);
        getchar();
        m=y[s1];
        n=y[s2];
        mst();
        printf("%d",s);

    }
}
void mst()
{
    int i,j,k;
    for(i=0;i<d;i++)
        par[i]=i;
    sort(grph.begin(),grph.end());
    c=0,s=0;
    for(i=0;i<grph.size();i++)
    {
        int p=fp(grph[i].u);
        int q=fp(grph[i].v);
        if(p!=q)
        {
            par[q]=p;
            c++;
            s=s+grph[i].w;
            if(c==n-1)
                break;
        }
    }

}








