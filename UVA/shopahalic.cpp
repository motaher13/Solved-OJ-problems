#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    int i,j,k,l,m,n,t;
    long long s;
    int ara[50000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        sort(ara,ara+n);
        s=0;
        for(i=n-3;i>=0;i=i-3)
            s=s+ara[i];
        printf("%lld\n",s);
    }
    return 0;
}


