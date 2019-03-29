#include<bits/stdc++.h>
using namespace std;
int limit=1000010;
int ara[1000010]={0};
int sum[1000010]={0};
int m,n,s=0;
void fun(int m)
{

    if(m>1000010 || ara[m]==1) return;
    else ara[m]=1;

    if(m<10) fun(m+1);
    int d=m%10;
    if(d>0) fun(m*10+(d-1));
    if(d<9) fun(m*10+(d+1));

}
int main()
{
    int i,j,k,l,t;

    fun(0);

    sum[0]=ara[0];
    for(i=1;i<1000010;i++) sum[i]=sum[i-1]+ara[i];

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        if(ara[m]==1) l=sum[n]-sum[m]+1;
        else l=sum[n]-sum[m];

        printf("%d\n",l);
    }

}
