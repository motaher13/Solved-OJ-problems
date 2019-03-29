#include<bits/stdc++.h>
using namespace std;
void build(int node,int b,int e);
int store[500000];
struct node
{
    int area;
    int minimum;
}ara[500000];
int main()
{
    int i,j,k,l,m,n,cas,t,q,x,y;
    scanf("%d",&t);
    for(cas=1;cas<=t;cas++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            scanf("%d",&store[i]);
        build(1,1,n);
        printf("Case %d: %d\n",cas,ara[1].area);
    }


return 0;
}

void build(int node,int b,int e)
{
    if(b==e)
    {
        ara[node].area=store[b];
        ara[node].minimum=store[b];
        return;
    }

    int lft=2*node;
    int rgt=2*node+1;
    int mid=(b+e)/2;

    build(lft,b,mid);
    build(rgt,mid+1,e);

    ara[node].minimum=min(ara[lft].minimum,ara[rgt].minimum);
    ara[node].area=max(ara[lft].area,ara[rgt].area);
    int ar=ara[node].minimum*(e-b+1);
    ara[node].area=max(ara[node].area,ar);
    printf("node=%d %d %d %d\n",node,ara[node].area,ara[node].minimum,ar);
}

