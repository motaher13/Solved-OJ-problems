#include<bits/stdc++.h>
using namespace std;
int n,ara[10],dp[10][4010];
int ans;
struct node
{
    int sz, vl;
    double rt;

    node(){}
    node(int _sz,int _vl,double _rt)
    {
        sz=_sz, vl=_vl, rt=_rt;
    }

    bool operator < (const node&p) const{
        return rt>p.rt;
    }
};

vector<node>vc;


int main()
{
    int i,j,k,l,t,p,m;
    double r;
    scanf("%d",&t);
    while(t--)
    {
        vc.clear();
        scanf("%d %d",&n,&m);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&p);
            r=(double) p/i;
            vc.push_back(node(i,p,r));
        }

        sort(vc.begin(),vc.end());
        int sum=0;
        for(i=0;i<vc.size();i++)
        {
            if(m/vc[i].sz!=0)
            {
                sum=sum+(m/vc[i].sz)*vc[i].vl;
                m=m%vc[i].sz;
                if(m==0)
                    break;
            }
        }

        printf("%d\n",sum);

    }

}
