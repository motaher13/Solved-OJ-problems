#include<bits/stdc++.h>
using namespace std;
int ara[110];
int main()
{
    int i,j,k,l,m,n,a,s=0;
    scanf("%d %d",&n,&a);
    for(i=1;i<=n;i++)
        scanf("%d",&ara[i]);
    for(i=0;i<=n;i++)
    {
        if(i+a<=n && a-i>0)
        {
            if(ara[i+a]==1 && ara[a-i]==1)
                {
                    if(i==0)
                        s++;
                    else
                        s+=2;
                }
        }
        else if((i+a<=n && a-i<=0) && ara[i+a]==1)
            s++;
        else if(((i+a)>n && a-i>0) && ara[a-i]==1)
            s++;

    }
    printf("%d\n",s);
    return 0;
}
