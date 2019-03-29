
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int i,j,k,l,t,n;

	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int sum=0;
	    int m=5;
	    while(1)
	    {
            j=n/m;
            if(j==0)
                break;
            sum+=j;
            m=m*5;
	    }

	    printf("%d\n",sum);
	}
}
