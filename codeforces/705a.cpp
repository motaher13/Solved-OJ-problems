#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i>1)
            printf(" that ");
        if(i%2==1)
            printf("I hate");
        else
            printf("I love");
    }
    printf(" it\n");
    return 0;
}
