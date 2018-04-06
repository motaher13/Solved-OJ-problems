#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >vc;
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        vc.clear();
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&j,&k);
            vc.push_back(make_pair(k,j));
        }
        sort(vc.begin(),vc.end());
        k=-1;
        int c=0;
        for(i=0;i<n;i++)
        {
            if(vc[i].second>=k)
            {
                c++;
                k=vc[i].first;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
