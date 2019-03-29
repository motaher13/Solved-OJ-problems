#include<bits/stdc++.h>
using namespace std;
vector<int>vc,vv;
int main()
{
    int i,j,k,l,m,n,c=0;
    scanf("%d",&n);
    map<int,int>mm;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(mm[m]==0)
        {
            mm[m]++;
            vc.push_back(m);
        }
        else
            mm[m]++;
    }
    sort(vc.begin(),vc.end());

    for(i=0,j=1;i<vc.s;i++)
    {
        if(mm[vc[i]]>0)
        {
            vv.push_back(vc[i]);
            mm[vc[i]]--;
        }
        else if()

    }
}
