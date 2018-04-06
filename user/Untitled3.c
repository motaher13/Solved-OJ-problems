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
vector<int>g[100];
int main()
{
    int i,j,k,l,m,n,a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        for(i=0;i<b;i++)
            scanf("%d %d",&n,&m);
            g[n].push_back(m);
    }
}
