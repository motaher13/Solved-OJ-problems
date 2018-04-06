#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ll i,j,n,m;
    cin>>i;
    while(i--)
    {
        ll mod=11;
    cin>>n;
    m=(((8*(n%mod))%mod)+10)%mod;
    m=m+1;
    m=m%mod;
    if(m==0) cout<<0<<endl;
    else
        cout<<mod-m<<endl;
    }
 return 0;
}
