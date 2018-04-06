#include<bits/stdc++.h>
using namespace std;
#define ll long long

void build(ll node,ll b,ll e);
ll query(ll node,ll b,ll e,ll i,ll j);
void update(ll node,ll b,ll e,ll i,ll j,ll val);
void mrg(ll node,ll lft,ll rgt);
void up_lazy(ll node,ll val);

struct nod
{
    ll z,o,t,lazy;
}ara[300030];

int main()
{
    //freopen("q.txt","w",stdout);
    ll i,j,k,l,m,n,cas,t,q,x,y,v;
    scanf("%lld",&t);
    for(cas=1;cas<=t;cas++)
    {
        printf("Case %lld:\n",cas);
        scanf("%lld %lld",&n,&q);

        build(1,1,n);

        for(i=0;i<q;i++)
        {
            scanf("%lld",&m);
            if(m==0)
            {
                scanf("%lld %lld",&x,&y);
                update(1,1,n,x+1,y+1,1);
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

void mrg(ll node,ll lft,ll rgt)
{
    ara[node].z=ara[lft].z+ara[rgt].z;
    ara[node].o=ara[lft].o+ara[rgt].o;
    ara[node].t=ara[lft].t+ara[rgt].t;
    ara[node].lazy=ara[lft].lazy+ara[rgt].lazy;
}
void up_lazy(ll node,ll val)
{
    val=val%3;
    if(val==1)
    {
        ll i=ara[node].o;
        ara[node].o=ara[node].z;
        ara[node].z=ara[node].t;
        ara[node].t=i;
    }
    if(val==2)
    {
        ll i=ara[node].t;
        ara[node].t=ara[node].z;
        ara[node].z=ara[node].o;
        ara[node].o=ara[node].t;
    }
}

void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        ara[node].z=1;
        ara[node].o=0;
        ara[node].t=0;
        ara[node].lazy=0;
        return;
    }

    ll lft=2*node;
    ll rgt=2*node+1;
    ll mid=(b+e)/2;

    build(lft,b,mid);
    build(rgt,mid+1,e);

    mrg(node,lft,rgt);
}
void update(ll node,ll b,ll e,ll i,ll j,ll val)
{
    if(ara[node].lazy != 0)
    {
        up_lazy(node,ara[node].lazy);
        if(b != e)
        {
            ara[node*2].lazy += ara[node].lazy;
            ara[node*2+1].lazy += ara[node].lazy;
        }
        ara[node].lazy = 0;
    }
    if(b > e || b > j || e < i)
        return;
    if(b >= i && e <= j)
    {

        up_lazy(node,val);
        if(b != e)
        {
            ara[node*2].lazy += val;
            ara[node*2+1].lazy += val;
        }
        return;
    }
    ll mid = (b + e) / 2;
    update(node*2, b, mid, i, j, val);
    update(node*2 + 1, mid + 1, e, i, j, val);
    mrg(node,node*2,node*2+1);
}

ll query(ll node, ll b, ll e, ll i, ll j)
{
    if(b > e || b > j || e < i)
        return 0;
    if(ara[node].lazy != 0)
    {
        up_lazy(node,ara[node].lazy);
        if(b != e)
        {
            ara[node*2].lazy +=ara[node].lazy;
            ara[node*2+1].lazy += ara[node].lazy;
        }
        ara[node].lazy = 0;
    }
    if(b >= i && e <= j)
        return ara[node].z;
    ll mid = (b + e) / 2;
    ll p1 = query(node*2, b, mid, i, j);
    ll p2 = query(node*2 + 1, mid + 1, e, i, j);
    return (p1 + p2);
}














