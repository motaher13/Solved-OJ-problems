#include<bits/stdc++.h>
using namespace std;

void build(int node,int b,int e);
int store[100010];
int query(int node,int b,int e,int i,int j);
void update(int node,int b,int e,int i,int v);
struct nod
{
    int l,lc,r,rc,mx,d;
};
nod a;
a.r=0,a.l=0,a.lc=0,a.rc=0,a.mx=0,d=0;

int main()
{
    int i,j,k,l,m,n,cas,t,q,x,y;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        scanf("%d",&q);
        for(i=1;i<=n;i++)
            scanf("%d",&store[i]);
        build(1,1,n);

        for(i=0;i<q;i++)
        {
            scanf("%d %d",&x,&y);
            j=query(1,1,n,x,y);
            printf("%d\n",j);
        }
        for(i=0;i<q;i++)
        {
            scanf("%d %d",&x,&y);
            update(1,1,n,x,y);
        }
    }


return 0;
}
ara[node].
void mrg(int node,int lft,int rgt,b,e)
{
    int mk=0;
    if(ara[rgt].l==ara[lft].r)
        mk=ara[rgt].lc+ara[lft].rc;
    ara[node].mx=max(ara[lft].mx,max(ara[rgt].mx,mk));

    ara[node].l=ara[lft].l;
    ara[node].r=ara[rgt].r;

    if(ara[lft].lc==((b+e)/2)-b+1 && ara[lft].l==ara[rgt].l)
        ara[node].lc=ara[lft].lc+ara[rgt].lc;
    else
        ara[node].lc=ara[lft].lc;

    if(ara[rgt].rc==e-(((b+e)/2)+1)+1 && ara[lft].r==ara[rgt].r)
        ara[node].rc=ara[rgt].rc+ara[lft].rc;
    else
        ara[node].rc=ara[rgt].rc;
}

void build(int node,int b,int e)
{
    if(b==e)
    {
        ara[node].l=ara[node].r=ara[node].d=store[b];
        ara[node].lc=ara[node].rc=ara[node].mx=1;
        return;
    }

    int lft=2*node;
    int rgt=2*node+1;
    int mid=(b+e)/2;

    build(lft,b,mid);
    build(rgt,mid+1,e);

    mrg[node,lft,rgt,b,e]
}

int query(int node,int b,int e,int i,int j)
{
    if(j<b ||i>e)
        return a;
    if(b>=i&& e<=j)
        return ara[node];
    int lft=node*2;
    int rgt=node*2+1;
    int mid=(b+e)/2;

    nod p1=query(lft,b,mid,i,j);
    nod p2=query(rgt,mid+1,e,i,j);

    qmrg(p1,p2)
}
nod mrg(int node,int lft,int rgt,b,e)
{
    int mk=0;
    if(ara[rgt].l==ara[lft].r)
        mk=ara[rgt].lc+ara[lft].rc;
    ara[node].mx=max(ara[lft].mx,max(ara[rgt].mx,mk));

    ara[node].l=ara[lft].l;
    ara[node].r=ara[rgt].r;

    if(ara[lft].lc==((b+e)/2)-b+1 && ara[lft].l==ara[rgt].l)
        ara[node].lc=ara[lft].lc+ara[rgt].lc;
    else
        ara[node].lc=ara[lft].lc;

    if(ara[rgt].rc==e-(((b+e)/2)+1)+1 && ara[lft].r==ara[rgt].r)
        ara[node].rc=ara[rgt].rc+ara[lft].rc;
    else
        ara[node].rc=ara[rgt].rc;
}










