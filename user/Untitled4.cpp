#include<bits/stdc++.h>
using namespace std;
int ara[100];
int prtn(int strt,int end);
void qs(int strt,int end);
int main()
{
    int i,j,k,l,m,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&ara[i]);
    int strt=1;
    int end=n;
    qs(strt,end);
    for(i=1; i<=n; i++)
        printf("%d ",ara[i]);
}
void qs(int strt,int end)
{

    if(strt<end)
    {
        int q=prtn(strt,end);
        qs(strt,q-1);
        qs(q+1,end);
    }
}

int prtn(int strt,int end)
{

    int i=strt-1;
    int j,k;
    for(j=strt;j<end; j++)
        if(ara[j]<=ara[end])
        {
            i++;
            int t=ara[i];
            ara[i]=ara[j];
            ara[j]=t;
        }
    i++;
    int t=ara[i];
    ara[i]=ara[end];
    ara[end]=t;
    return i;
}

















