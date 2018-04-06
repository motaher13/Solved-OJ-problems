#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <string.h>
#include <string>
using namespace std;
vector<int>vc[250];
vector<int>ty[250];
int visited[250];
int visit[250];
int ara[250];
int tt[220],tt1[220];
 map<string,int>name;

int para[250][200];

string str[250],fg,gf;
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

    int n,m,starting,i,j,k,l,w,test,r,t,u=1;
while(scanf("%d",&n)==1){
    count=1;
  for(i=1;i<=n;i++){
        vc[i].clear();
  tt[i]=0;
  tt1[i]=0;
  visit[i]=0;
  visited[i]=0;
  }
  for(i=1;i<=n;i++){
   cin>>str[i];
    name[str[i]]=i;
  }
  scanf("%d",&m);
    for(i=0;i<m;i++){
cin>>fg;
cin>>gf;
 k=name[fg];
        l=name[gf];
        vc[k].push_back(l);
        tt[k]=1;
        tt1[l]=1;
      para[k][l]=1;
      para[l][k]=1;
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
    r=0;
 for(i=count;i>=1;i--){

    for(j=0;j<ty[i].size();j++){
        ara[r]=ty[i][j];
        r++;
            }
            ty[i].clear();
 }
 while(1){
        k=0;
 for(j=0;j<r-1;j++){
        l=ara[j];
 w=ara[j+1];
   if(l>w&&para[w][l]!=1&&para[l][w]!=1){
    t=ara[j];
    ara[j]=ara[j+1];
    ara[j+1]=t;
 k=1;
   }
 }
 if(k==0)break;
 }
 printf("Case #%d: Dilbert should drink beverages in this order: ",u);
 u++;
 for(j=0;j<r;j++){
        k=ara[j];
        if(j<r-1)
   cout<<str[k]<<" ";
   else
     cout<<str[k]<<".";

 }
 printf("\n");
 printf("\n");
   for(i=1;i<=n;i++){
    vc[i].clear();
  visit[i]=0;
    visited[i]=0;
  str[i]='\0';
   }
   for(i=count;i>=1;i--){
    ty[i].clear();
   }
   name.clear();
   for(j=0;j<r;j++){
    for(i=j+1;i<r;i++){
        para[ara[j]][ara[i]]=0;
        para[ara[i]][ara[j]]=0;
    }
   }
   name.clear();
}
return 0;
}
