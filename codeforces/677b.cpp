#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[100010];
int main()
{
    ll i,j,k,l,m,n,h,c=0,s=0;
    scanf("%I64d %I64d %I64d",&n,&h,&k);
//    for(i=0;i<n;i++)
//        scanf("%I64d",&ara[i]);
    j=0,i=0;
    while(1)
    {
        for(i=j;i<n;i++)
        {
            scanf("%I64d",&ara[i]);
            if(s+ara[i]<=h){
                s+=ara[i];
                j=i+1;}
            else
                break;
        }
        printf("%d ",s);
        s-=k;
        if(s<0)
            s=0;
        c++;
        printf("%d\n",c);
        if(i>=n && s==0)
            break;
    }
    printf("%I64d\n",c);
    return 0;
}
