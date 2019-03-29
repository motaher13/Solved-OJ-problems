#include<bits/stdc++.h>
using namespace std;
vector<long long>vc,vr;
int main()
{
    long long i,j,k,l,m,n;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0) break;
        vc.clear();
        vr.clear();
        for(i=0;i<n;i++)
        {
            scanf("%lld",&k);
            vc.push_back(k);
        }
        for(i=0;i<n;i++)
        {
            scanf("%lld",&k);
            vr.push_back(k);
        }
        sort(vc.begin(),vc.end());
        sort(vr.begin(),vr.end());
        long long s=0;
        for(i=0,j=n-1;i<n;i++,j--)
            s=s+vc[i]*vr[j];
        printf("%lld\n",s);
    }
    return 0;
}
