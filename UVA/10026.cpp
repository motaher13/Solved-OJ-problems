#include<bits/stdc++.h>
using namespace std;
struct data
{
    double d,f,s,r;
    bool operator < (const data&p)const
    {
        if(r==p.r)
        {
            return s<p.s;
        }
        else
        {
            return r<p.r;
        }
    }
};
vector<data>vc;
int main()
{

    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        data p;
        vc.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%lf %lf",&p.d,&p.f);
            p.s=i;
            p.r=p.d/p.f;
            vc.push_back(p);
        }
        sort(vc.begin(),vc.end());
        for(i=0;i<vc.size()-1;i++)
            printf("%.0lf ",vc[i].s);
        printf("%.0lf\n",vc[i].s);
        if(k!=t-1)
            printf("\n");
    }
    return 0;
}
