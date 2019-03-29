#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,p,q,t,a,b,mx=0,ck=0;
    int ara[100010],check[100010]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]),mx=max(mx,ara[i]);
    for(i=0;i<n;i++)
    {
        int c=0;
        if(ara[i]==mx && check[i]==0)
        {
            for(j=i;j<n;j++)
            {
                if(ara[j]==mx && check[j]==0)
                    c++,check[j]=1;
                else
                    break;
            }

        }
        ck=max(ck,c);

    }
    printf("%d\n",ck);
}
