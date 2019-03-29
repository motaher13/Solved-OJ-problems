#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&n);
    int c=0;
    for(i=1;;i++)
    {
        m=n/i;
        m=m-(i-1);
        if(m<=0) break;
        else
            c+=m;
    }
    printf("%d\n",c);
    return 0;
}
