#include<bits/stdc++.h>
using namespace std;
int ara[20];
vector<int>vc;
int gcd(int u,int v)
{
    while(v!=0)
    {
        int r=u%v;
        u=v;
        v=r;
    }
    return u;
}
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for(int p=1;p<=t;p++)
    {
        vc.clear();
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
            vc.push_back(ara[i]);}

        while(vc.size()!=1)
        {
            sort(vc.begin(),vc.end());
            i=vc.size();
            int u=vc[i-1];
            int v=vc[i-2];
            vc.pop_back();
            vc.pop_back();
            m=u*v;
            j=gcd(u,v);
            m=m/j;
            //printf("%d %d %d\n",u,v,m);
            vc.push_back(m);
        }

        m=vc[0];
        //printf("%d\n",m);
        int s=0;
        for(i=0;i<n;i++)
            s=s+m/ara[i];
        m=m*n;
        if(m>s)
            k=gcd(m,s);
        else
            k=gcd(s,m);
        m=m/k;
        s=s/k;
        printf("Case %d: %d/%d\n",p,m,s);
    }
    return 0;
}
