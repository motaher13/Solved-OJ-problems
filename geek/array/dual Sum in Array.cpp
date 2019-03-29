#include<bits/stdc++.h>
using namespace std;
int ara[100010],n,m;

bool check()
{
    int i,j,k,l;
    sort(ara,ara+n);
    i=0,j=n-1;
    while(i<j)
    {
        if(ara[i]+ara[j]==m)
            return true;
        if(ara[i]+ara[j]<m)
            i++;
        if(ara[i]+ara[j]>m)
            j--;

    }
    return false;
}
int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++) scanf("%d",&ara[i]);

        if(check())
            printf("Yes\n");
        else
            printf("No\n");

    }

}
