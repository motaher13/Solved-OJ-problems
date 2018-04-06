#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int visited[2000000],visit[2000000],level[2000000],track[2000000],cou;
vector<int>vc[200000];
 void dfs(int r){
     int i,v;
    if(visited[r]==1)
        return;
        visit[r]=1;
    for(i=0;i<vc[r].size();i++){
        v=vc[r][i];
        if(visit[v]!=1){
        dfs(v);
        }
    }
     cou++;
    visited[r]=1;
    return;
 }
int main()
{
    int n,m,starting,i,j,k,l,r,t;
  scanf("%d",&t);
while(t--){
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&r);
    for(i=0;i<m;i++){
scanf("%d%d",&k,&l);
        vc[k].push_back(l);
    }
    for(i=1;i<=n;i++){
      visited[i]=0;
      visit[i]=0;
    }
    for(k=0;k<r;k++){
            scanf("%d",&l);
        track[l]=1;
    }
  cou=0;
  for(i=1;i<=n;i++){
    if(visit[i]==0&&track[i]==1){
        dfs(i);
        track[i]=0;
    }
  }
  printf("%d\n",cou);
  for(i=1;i<=n;i++){
    vc[i].clear();
    track[i]=0;
  }
}
return 0;
}
