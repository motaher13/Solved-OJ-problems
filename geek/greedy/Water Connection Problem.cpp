#include<bits/stdc++.h>
using namespace std;

vector<int>v[25];
vector<int>w[25];

int main()
{
    int i,j,k,l,m,n,t,p,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&p);
        int check[25]={0};
        for(i=0;i<p;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            v[a].push_back(b);
            w[a].push_back(c);
            check[b]=1;
        }
        for(i=1;i<=n;i++)
        {
            if(check[i]==0 && v[i].size()!=0)
            {
                int mn=INT_MAX;
                j=i;
                while(1)
                {
                    k=v[j][0];
                    mn=min(mn,w[j][0]);
                    if(v[k].size()==0)
                    {
                        printf("%d %d %d\n",i,k,mn);
                        break;
                    }
                    else
                        j=k;
                }
            }
        }
    }
}
