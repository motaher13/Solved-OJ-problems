#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
vector<pair<int,int> >vc;
bool mycomp(pair<int,int>m,pair<int,int>n)
{
    if(m.first==n.first) return m.second<n.second;
     return m.first<n.first;
}
int ara[6000]= {0};

int main()
{
    int i,j,k,l,m,n,t;
    pair<int,int>u;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        vc.clear();
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&u.first,&u.second);
            vc.push_back(u);
        }
        sort(vc.begin(),vc.end(),mycomp);


        for(i=0; i<n; i++)
            ara[i]=0;
        int p=0,q=0;
        int c=0;
        for(i=0;i<n;i++)
        {
            if(ara[i]==0)
            {
                ara[i]=1;
                p=vc[i].first;
                q=vc[i].second;
                c++;
                for(j=0;j<n;j++)
                {
                    if(ara[j]==0&&((vc[j].first>=p&& vc[j].second>=q)))
                    {
                        ara[j]=1;
                        p=vc[j].first;
                        q=vc[j].second;
                    }
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;

}
