#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l;
    scanf("%d",&l);
    int p=0,a=0,b=0,c=0,ans=0;
    while(l--)
    {
        scanf("%d",&i);
        if(p==0) p=i,c++;
        else if( p!=i)
        {
            p=i;
            ans=max(ans,max(min(a,b),min(b,c)));
            a=b,b=c,c=1;
        }
        else
            c++;
    }
    ans=max(ans,max(min(a,b),min(b,c)));

    printf("%d\n",ans*2);
}
