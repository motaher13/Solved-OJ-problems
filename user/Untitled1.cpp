#include<bits/stdc++.h>
using namespace std;
int ara[100]={0};
int f(int m);
int main()
{
    int i,j,k,l,m,n;
    scanf("%d",&n);
    i=f(n-1);
    printf("%d\n",i);
}
int f(int m)
{
    if(m<0) return 0;
    if(m==0 || m==1) return 1;
    if(ara[m]==0)
        ara[m]=f(m-1)+f(m-2);
    return ara[m];
}
