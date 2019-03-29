#include<bits/stdc++.h>
using namespace std;

int ara[10000010],n;

pair<int,int> call()
{

    int h=0,l=INT_MAX,b=0,i,j,k,e=0;

    for(i=0;i<n;i++)
    {
        if(ara[i]>h)
            h=ara[i];
        else if(ara[i]<h)
            l=min(l,ara[i]),e=i;

    }
    if(l==INT_MAX)
        l=0;
    for(i=0;i<n;i++)
        if(ara[i]>l)
            return {i,e};
}

int main()
{
    int i,j,k,l,m,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&ara[i]);
        auto p=call();
        printf("%d %d\n",p.first,p.second);
    }
}
