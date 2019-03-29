#include<bits/stdc++.h>
using namespace std;
int ara[100][100]={0};
int f(int n,int r);
int main()
{
    int i,j,k,l,m,n,r;
    scanf("%d %d",&n,&r);
    i=f(n,r);
    printf("%d\n",i);
}
int f(int n,int r)
{
    if(n<0 || r<0) return 0;
    if(n==r) return 1;
    if(r==1) return n;

    if(ara[n][r]==0)
        ara[n][r]=f(n-1,r)+f(n-1,r-1);
    return ara[n][r];
}

