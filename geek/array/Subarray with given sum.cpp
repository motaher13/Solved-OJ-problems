
#include<bits/stdc++.h>
using namespace std;
int ara[10000100];

int main()
{

    int i,j,k,l,m,n,s,p,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);

        j=0,s=0;
        for(i=0;i<n;i++)
        {
            while((s+ara[i])>m)
                s-=ara[j],j++;
            s+=ara[i];
            if(s==m)
                break;

        }

        if(s==m)
            printf("%d %d\n",j+1,i+1);
        else
            printf("-1\n");
    }

    return 0;

}
