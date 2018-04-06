#include<bits/stdc++.h>
using namespace std;
vector<int>vc;
int main()
{
    int i,j,k=0,l,m,n,t;
    scanf("%d %d",&n,&m);
    int mx=0,mn=214748364;
    for(j=0; j<n; j++)
    {
        k=0;
        t=0;
        for(i=0; i<m; i++)
        {
            scanf("%d",&l);
            k=k+l;
            t=t+abs(l);
        }
        if(k>mx)
            mx=k;
        if(k<mn)
            mn=k;

    }

    j=mx-mn;
    j=abs(j);
    printf("%d\n",j);
    return 0;

}
