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
vector<int>v[100];
int ara[100];

void dfs(int i)
{
    int n;
    if(ara[i]==1)
        return;
    ara[i]=1;
    for(int j=0;j<v[i].size();j++){
        int n=v[i][j];
        dfs(n);}
}



int main()
{
    int i,j,k,l,m,n,count=0,a,b,r,c;
    scanf("%d %d",&a,&b);
    for(i=0;i<b;i++)
    {
        scanf("%d %d",&r,&c);
        v[r].push_back(c);
        v[c].push_back(r);
    }
    for(i=1;i<=a;i++)
        if(ara[i]!=1)
        {
            dfs(i);
            count++;
        }
    printf("%d\n",count);
}
