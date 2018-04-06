#include <bits/stdc++.h>
using namespace std;

#define mx 100001
long long int tree[mx*4];


long long int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)return 0;
    else if(b>=i && e<=j)return tree[node];
    int left=node*2;
    int right=(node*2)+1;
    int mid=(b+e)/2;
    long long int p1=query(left,b,mid,i,j);
    long long int p2=query(right,mid+1,e,i,j);
    return p1+p2;
}


void update(int node,int b,int e,int i,int newvalue)
{
    if(i>e || i<b)return;
    else if(b>=i && e<=i)
    {
        tree[node]+=newvalue;
        return;
    }
    int left=node*2;
    int right=(node*2)+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,newvalue);
    update(right,mid+1,e,i,newvalue);
    tree[node]=tree[left]+tree[right];
}


int main()
{
    int t,i,k,j,n,c,p,q,v,x;
    scanf("%d",&t);
    {
//­std::memset(arr,0,siz­eof arr);
        std::memset(tree,0,sizeof tree);
        scanf("%d %d",&n,&c);
//init(1,1,n);
        for(j=0; j<c; j++)
        {
            scanf("%d",&x);
            if(x==0)
            {
                scanf("%d %d %d",&p,&q,&v);
                if(q<p)
                {
                    p=p^q;
                    q=p^q;
                    p=p^q;
                }
                for(k=p; k<=q; k++)
                {
                    update(1,1,n,k,v);
                }
            }
            else if(x==1)
            {
                scanf("%d %d",&p,&q);
                if(q<p)
                {
                    p=p^q;
                    q=p^q;
                    p=p^q;
                }
                printf("%d\n",query(1,1,n,p,q));
            }
        }
    }


    return 0;
}
