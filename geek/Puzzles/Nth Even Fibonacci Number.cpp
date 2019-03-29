#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[3020];
    int i,j,k,l,m,n,t;
    ara[1]=1,ara[2]=1;
    for(i=3;i<3010;i++)
        ara[i]=(ara[i-1]+ara[i-2])%1000000007;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        cout<<ara[n*3]<<endl;
    }
}
