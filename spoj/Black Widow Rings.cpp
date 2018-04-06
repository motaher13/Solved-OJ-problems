#include<bits/stdc++.h>
using namespace std;

int a[1010],b[1010];
int main()
{
    int i,j,k,l,m,n,t,px,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int mx=0,m=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&a[i],&b[i]);
            if(a[i]>mx)
            {
                mx=a[i];
                px=i;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(b[i]>m && i!=px)
            {
                m=b[i];
            }
        }
        if(mx>m)
            printf("%d\n",px);
        else
            printf("-1\n");
    }
    return 0;
}
