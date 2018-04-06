#include<bits/stdc++.h>
using namespace std;
int p[1000100],ara[1000100]={0};
int main()
{
    int i,j=0,k,l,n;
    map<int,int>m;
    for(i=2;i<1000100;i++)
    {
        if(ara[i]==0)
        {
            p[j]=i;
            j++;
            m[i]=1;
            for(k=0;k*i<1000100;k++)
                ara[k*i]=1;
        }
    }
    printf("%d\n",j);
    printf("%d\n",p[0]);

    while(scanf("%d",&n)==1)
    {
        int c=0;
        if(n==0)
            break;

        if(m[n]==1){
            printf("NO WAY!\n");
            continue;}
            printf("1\n");
        for(i=0;i<j;i++)
        {
            l=n-p[i];

            if(p[i]>l)
                break;
            if(m[l]==1)
            {
                printf("%d:\n%d+%d\n",n,p[i],l);
                c=1;
                break;
            }
        }
        if(c==0)
            printf("NO WAY!\n");
    }
}
