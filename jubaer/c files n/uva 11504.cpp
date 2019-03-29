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
scanf("%d",&test);
while(test--){
    count=1;
    scanf("%d%d",&n,&m);
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
                count++;
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
    if(ty[i].size()!=0){
            w=ty[i][0];
            if(tt[w]!=1&&tt1[w]!=1&&visit[w]==0){
                num++;
                visit[w]=1;
                visited[w]=1;
            }
            else if(tt[w]==1&&visit[w]==0){
                num++;
                dfs(w);
            }
    }
 }
   printf("%d",num);
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
