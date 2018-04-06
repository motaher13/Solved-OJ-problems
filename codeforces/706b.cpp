#include<bits/stdc++.h>
using namespace std;
int ara[150000],po[150000]={0};
int main()
{
    int i,j,k,l,m,n,q,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    sort(ara,ara+n);
    for(i=1;i<n;i++)
    {
        for(j=ara[i-1];j<ara[i];j++)
            po[j]=i;
    }
    po[ara[n-1]]=n;
    scanf("%d",&p);
    for(i=0;i<p;i++)
    {
        scanf("%d",&m);
        if(m>ara[n-1])
            printf("%d",n);
        else
        printf("%d\n",po[m]);
    }
return 0;
}
