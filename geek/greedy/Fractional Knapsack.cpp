
#include<bits/stdc++.h>
using namespace std;

struct data
{
    double v,w,r;

    bool operator < (const data&p) const
    {
        return r>p.r;
    }
};

int main()
{
    int t,w,i,j,l,m,n;
    data ara[200];
    double k;
    scanf("%d",&t);
    while(t--)
    {
        l=0,k=0;
        scanf("%d %d",&n,&w);
        for(i=0;i<n;i++)
        {
            scanf("%lf %lf",&ara[i].v,&ara[i].w);
            ara[i].r=ara[i].v/ara[i].w;
        }

        sort(ara,ara+n);

        for(i=0;i<n&&l<=w;i++)
        {
            if(ara[i].w>(w-l))
            {
                k+=(double)(w-l)*ara[i].r;
                l=w;
            }
            else
            {
                l+=ara[i].w;
                k+=ara[i].v;
            }
        }

        printf("%.2lf\n",k);
    }
}
