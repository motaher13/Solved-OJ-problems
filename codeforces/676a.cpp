#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,mn=2147483647,mx=0,mnp,mxp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        if(m>mx)
        {
            mx=m;
            mxp=i;
        }
        if(m<mn)
        {
            mn=m;
            mnp=i;
        }
    }
    if((mxp==1 && mnp==n)|| (mxp==n && mnp==1))
        printf("%d\n",abs(mxp-mnp));
    else
       {
            i=mnp-1;
            j=max(i,mxp-1);
            k=max(j,n-mnp);
            l=max(k,n-mxp);
            printf("%d\n",l);
       }
    return 0;
}
