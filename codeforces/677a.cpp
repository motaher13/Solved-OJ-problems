#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,s=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&l);
        if(l>m)
            s+=2;
        else
            s++;
    }
    printf("%d\n",s);
    return 0;
}
