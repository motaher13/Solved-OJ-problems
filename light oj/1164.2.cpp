#include<bits/stdc++.h>
using namespace std;
#define ll long long
void build(ll node,ll b,ll e);
ll store[100010],ara[300030],lazy[300030];
ll query(ll node,ll b,ll e,ll i,ll j);
void update(ll node,ll b,ll e,ll i,ll j,ll val);


int main()
{
    //freopen("q.txt","w",stdout);
    ll i,j,k,l,m,n,cas,t,q,x,y,v;
    scanf("%lld",&t);
    for(cas=1;cas<=t;cas++)
    {
        printf("Case %lld:\n",cas);
        scanf("%lld %lld",&n,&q);
        for(i=1;i<=n;i++)
            store[i]=0;
        build(1,1,n);


        for(i=0;i<q;i++)
        {
            scanf("%lld",&m);
            if(m==0)
            {
                scanf("%lld %lld %lld",&x,&y,&v);
                update(1,1,n,x+1,y+1,v);

            }
            if(m==1)
            {
                scanf("%lld %lld",&x,&y);
                j=query(1,1,n,x+1,y+1);
                printf("%lld\n",j);
            }
        }
    }
    return 0;
}
void build(ll node,ll b,ll e)
{

    if(b==e)
    {
        ara[node]=store[b];
        lazy[node]=0;

        return;

    }

    ll lft=2*node;
    ll rgt=2*node+1;
    ll mid=(b+e)/2;

    build(lft,b,mid);
    build(rgt,mid+1,e);

    ara[node]=ara[lft]+ara[rgt];
    lazy[node]=0;
}
void update(ll node,ll b,ll e,ll i,ll j,ll val)
{
    if(lazy[node] != 0)
    {

        ara[node] += (e - b + 1) * lazy[node];
        if(b != e)
        {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
    if(b > e || b > j || e < i)
        return;
    if(b >= i && e <= j)
    {

        ara[node] += (e - b + 1) * val;
        if(b != e)
        {

            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }
        return;
    }
    ll mid = (b + e) / 2;
    update(node*2, b, mid, i, j, val);
    update(node*2 + 1, mid + 1, e, i, j, val);
    ara[node] = ara[node*2] + ara[node*2+1];
}

ll query(ll node, ll b, ll e, ll i, ll j)
{
    if(b > e || b > j || e < i)
        return 0;
    if(lazy[node] != 0)
    {

        ara[node] += (e - b + 1) * lazy[node];
        if(b != e)
        {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
    if(b >= i && e <= j)
        return ara[node];
    ll mid = (b + e) / 2;
    ll p1 = query(node*2, b, mid, i, j);
    ll p2 = query(node*2 + 1, mid + 1, e, i, j);
    return (p1 + p2);
}













