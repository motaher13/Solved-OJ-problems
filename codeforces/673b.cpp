#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,p,q,r,s,b=0,c=0,mx=0;
    scanf("%d %d",&n,&m);
    map<int,int>mm;
    for(i=0; i<m; i++)
    {
        scanf("%d %d",&p,&q);
        if(mm[p]==0)
            c++;
        if(mm[q]==0)
            c++;
        if(mm[p]==0 && mm[q]==0)
        {
            mm[max(p,q)]=1;
            mm[min(p,q)]=2;
            mx=max(mx,min(p,q));
        }
        else if((mm[p]==1 || mm[q]==2)&& p>q)
        {
            mm[p]=1;
            mm[q]=2;
            mx=max(mx,q);
            if(p<mx)
                b=1;
        }
        else if((mm[p]==2 || mm[q]==1)&& p<q)
        {
            mm[p]=2;
            mm[q]=1;
            mx=max(mx,p);
            if(q<mx)
                b=1;
        }
        else
            b=1;
    }
    if(b==1)
        printf("0\n");
    else
    {
        if(c==n)
            printf("1\n");
        else if(c==0)
        {
            j=pow(2,n-c-2);
            printf("%d\n",j);
        }
        else
        {
            j=pow(2,n-c);
            printf("%d\n",j);
        }
    }
    return 0;
}
