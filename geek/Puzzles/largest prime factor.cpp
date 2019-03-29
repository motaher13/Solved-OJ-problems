
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int i,j,k,l,t,n,mx;

	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    mx=2;
	    while(n%2==0)
            n=n/2;
        for(i=3;i<=sqrt(n);i+=2)
        {
            while(n%i==0)
            {
                mx=i;
                n=n/i;
            }
        }

        if(n>2)
            mx=max(mx,n);

        printf("%d\n",mx);
	}
}
