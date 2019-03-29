#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int i,j,k,l,t,n,m;

	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    n=1+8*n;
	    m=sqrt(n);
	    if(m*m==n)
            printf("1\n");
        else
            printf("0\n");
	}
}
