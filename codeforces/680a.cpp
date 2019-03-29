#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,mx=0,s=0;
    int ara[10];
    map<int,int>mm;
    for(i=1; i<=5; i++)
    {
        scanf("%d",&ara[i]);
        mm[ara[i]]++;
        //mx=max(mm[ara[i]],mx);
        if(mm[ara[i]]>=2 && mm[ara[i]]<=3 && mm[ara[i]]*ara[i]>mx)
            mx=mm[ara[i]]*ara[i];
        s+=ara[i];
    }
    s-=mx;
    printf("%d\n",s);
    return 0;
}
