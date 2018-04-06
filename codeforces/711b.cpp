#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ara[510][510],row[510]= {0},clm[510]= {0};
int main()
{
    ll i,j,k,l,m,n,p,q,r=0,c=0,s,md=0,sd=0,b=0;
    scanf("%I64d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%I64d",&ara[i][j]);
            if(ara[i][j]==0){
                p=i;
                q=j;}
            row[i]+=ara[i][j];
            clm[j]+=ara[i][j];

        }
        if(i!=p)
            r=row[i];
    }
    //printf("%I64d\n",r);
    for(i=0; i<n; i++)
    {
        if(i==p)
            continue;
        else if(row[i]!=r)
        {
            //printf("1 %I64d\n",i);
            b=1;
            break;
        }

    }
    for(i=0; i<n; i++)
    {
        if(i==q)
            continue;
        else if(clm[i]!=r)
        {
//            printf("%d %d\n",p,q);
//            printf("2 %I64d %I64d\n",i,clm[i]);
            b=1;
            break;
        }
    }


    if(n==1)
        printf("1\n");
    else if(b==1 || r-row[p]==0)
        printf("-1\n");
    else if(b==0)
        printf("%I64d\n",r-row[p]);

    return 0;
}
