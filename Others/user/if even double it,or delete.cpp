#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    int ara[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    for(i=0;i<n;i++)
    {
        if(ara[i]%2==0)
        {
            n++;
            for(j=n-1;j>i+1;j--)
                ara[j]=ara[j-1];
            ara[i+1]=ara[i];
            i++;
        }
        else
        {
            n--;
            for(j=i;j<n;j++)
                ara[j]=ara[j+1];
            i--;
        }
    }
    for(i=0;i<n;i++)
        printf("%d",ara[i]);
}
