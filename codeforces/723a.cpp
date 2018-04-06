#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m;
    int ara[10];
    for(i=0;i<3;i++)
        scanf("%d",&ara[i]);
    sort(ara,ara+3);
    m=ara[1]-ara[0]+ara[2]-ara[1];
    printf("%d\n",m);
    return 0;
}
