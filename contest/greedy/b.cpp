#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,m,n;
    vector<int>vc;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        vc.push_back(m);
    }
    sort(vc.begin(),vc.end());
    int s=0;
    for(i=0;i<=n/2;i++)
    {
        s=s+vc[i]/2+1;
    }
    printf("%d\n",s);
    return 0;
}
