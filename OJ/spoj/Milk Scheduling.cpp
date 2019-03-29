#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >vc;
int ara[100003]={0};
int main()
{
    long long i,j,k,l,m,n;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&k,&l);
        vc.push_back(make_pair(k,l));
    }
    sort(vc.begin(),vc.end());
    map<long long,long long>mm;
    long long s=0;
    for(i=vc.size()-1;i>=0;i--)
    {
        m=vc[i].second;
        while(m)
        {
            if(ara[m]==0)
            {
                s+=vc[i].first;
                ara[m]=1;
                break;
            }
            else
                m--;
        }
    }
    printf("%lld\n",s);


    return 0;
}
