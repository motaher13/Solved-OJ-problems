#include <iostream>
using namespace std;
typedef unsigned long long ll;
ll mod=11;
int main() {
	ll t,counter=0;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll ans=((((n%mod)*8)%mod)+10)%mod;
		ans+=1;
		ans=ans%mod;
		if(ans%11==0) cout<<0<<endl;
		else cout<<mod-ans%mod<<endl;
	}
	return 0;
}
