#include<bits/stdc++.h>
using namespace std;
int ara[5000]={0};
vector<int>p;
int q[5000]={0};
int main()
{
    int i,j,k,l,m,n;
    p.clear();
    for(i=2;i<100;i=(i==2?3:i+2))
    {
        if(ara[i]==0)
        {
            p.push_back(i);
            for(j=1;j*i<100;j++)
                ara[i*j]=1;
        }
    }


    while(scanf("%d",&n)==1)
    {
        for(i=0;i<=n;i++)
            q[i]=0;
        m=n;
        for(i=0;i<p.size()&&p[i]<=n;i++)
        {
            while(n%p[i]==0)
            {
                n=n/p[i];
                q[i]++;
            }
        }

        int s=1;
        for(i=0;p[i]<=m;i++)
            if(q[i]>0)
            {
                double u,v,w;
                u=(double)p[i];
                v=(double)q[i];

                w=pow(u,v+1);
                w--;
                w=w/(u-1);
                s=s*w;

            }

        printf("%d\n",s);
    }

}
