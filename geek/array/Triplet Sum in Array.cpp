#include<bits/stdc++.h>
using namespace std;
int ara[100010],n,m;

bool check()
{
    int i,j,k,l;
    sort(ara,ara+n);

    for(i=0;i<n-2;i++)
    {
        j=i+1,k=n-1;
        while(j<k)
        {
            l=ara[i]+ara[j]+ara[k];
            if(l==m)
                return true;
            else if(l<m)
                j++;
            else
                k--;
        }

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
            printf("1\n");
        else
            printf("0\n");

    }

}
