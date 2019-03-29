#include<bits/stdc++.h>
using namespace std;

int ara[1000];
int bra[1000];
int main()
{
    int sum,i,j,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&ara[i]);
        for(i=0;i<n;i++) scanf("%d",&bra[i]);
        sort(ara,ara+n);
        sort(bra,bra+n);
        sum=0,i=0,j=0;

        while(i<n && j<n)
        {
            if(ara[i]==bra[j])
                sum=sum+ara[i]+bra[j],i++,j++;
            else if(ara[i]<bra[j])
                i++;
            else if(ara[i]>bra[j])
                j++;
        }

        printf("%d\n",sum);


    }

}
