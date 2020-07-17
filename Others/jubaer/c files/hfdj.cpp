#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
vector<int>vc[2000000];
vector<int>ty[2000000];
int visited[2000000];
int visit[2000000];
int tt[2000000],tt1[2000000];
int count,num;
 void dfs(int r){
     int i,v,start;
    start=count;
    if(visited[r]==1)
        return;
        visit[r]=1;
    for(i=0;i<vc[r].size();i++){
        v=vc[r][i];
        if(visit[v]!=1){
           count++;
        dfs(v);
        }
    }
    visited[r]=1;
    count++;
   ty[count].push_back(r);
    return;
 }
int main()
{

    int n,m,starting,i,j,k,l,w,test;
while(scanf("%d%d",&n,&m)){
        if(n==0&&m==0)break;
    count=1;

  for(i=1;i<=n;i++){
        vc[i].clear();
  tt[i]=0;
  tt1[i]=0;
  }

    for(i=0;i<m;i++){
scanf("%d%d",&k,&l);
        vc[k].push_back(l);
        tt[k]=1;
        tt1[l]=1;
    }
    for(i=1;i<=n;i++){
      visited[i]=0;
      visit[i]=0;
    }
    for(i=1;i<=n;i++){
            if(tt[i]!=1&&tt1[i]!=1){
                visit[i]=1;
                visited[i]=1;
                ty[count].push_back(i);
            }
        if(visit[i]==0&&tt[i]==1){
            dfs(i);
        }
    }
    for(i=1;i<=n;i++){
        visited[i]=0;
        visit[i]=0;
    }
    num=0;
 for(i=count;i>=1;i--){

    for(j=0;j<ty[i].size();j++){
          printf("%d ",ty[i][j]);
            }
 }
   printf("\n");
   for(i=1;i<=n;i++){
    vc[i].clear();

   }
   for(i=count;i>=1;i--){
    ty[i].clear();
   }
}
return 0;
}
