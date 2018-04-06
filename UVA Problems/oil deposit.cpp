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
char str[1000][1000];
int m,n;
void DFS(int x,int y)
{
    if(x<0 || y<0|| x>=m || y>=n) return;
    if(str[x][y]=='*') return;
    if(str[x][y]!='*') str[x][y]='*';
    DFS(x,y+1);
    DFS(x,y-1);
    DFS(x+1,y);
    DFS(x-1,y);
    DFS(x+1,y+1);
    DFS(x+1,y-1);
    DFS(x-1,y+1);
    DFS(x-1,y-1);
}
int main()
{
    int i,j,k,l,c;
    while(scanf("%d %d",&m,&n)==2)
    {
        c=0;
        if(m==0)
            break;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%c",&str[i][j]);
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            {
                if(str[i][j]!='*'){
                    DFS(i,j);
                    c++;}
            }
        printf("%d\n",c);
    }
}
