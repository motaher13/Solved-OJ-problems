#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        s=s+j;
    }
    if(n==1 && s==1)
        printf("YES\n");
    else if(n>1 && s==n-1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
