
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	long long i,j,k,l,t,n,sum,m;

	scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld",&n);
	    sum=1;
	    for(i=2;i<=sqrt(n);i++)
	    {
            if(n%i==0)
            {
                j=n/i;
                sum=sum+j+i;
            }
	    }

	    if(sum==n)
            printf("1\n");
        else
            printf("0\n");
	}
}
