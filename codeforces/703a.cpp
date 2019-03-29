#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l=0,m=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&j,&k);
        if(j>k)
            m++;
        else if(k>j)
            l++;
    }
    if(m>l)
        printf("Mishka\n");
    else if(l>m)
        printf("Chris\n");
    else
        printf("Friendship is magic!^^\n");
    return 0;
}
