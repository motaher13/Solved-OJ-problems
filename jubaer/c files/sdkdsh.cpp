#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <string.h>
using namespace std;
vector<int>vc[300];
vector<int>ty[300];
int para[300][100];
int visited[300];
int visit[300];
int tt[300],tt1[300];
map<string,int>name;
map<int,string>me;
char str[100],str2[100];
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

    int n,m,starting,i,j,k,l,w,test,r,f,g,h,t,ara[250],u=1;
while(scanf("%d",&n)==1){

        for(i=1;i<=n;i++)
            for(j=i+1;j<=n;j++){
                para[i][j]=0;
                para[j][i]=0;
            }
    count=1;
    for(i=1;i<=n;i++){

        cin>>str;
        name[str]=i;
        me[i]=str;
    }

  for(i=1;i<=n;i++){
        vc[i].clear();
  tt[i]=0;
  tt1[i]=0;
  }
  scanf("%d",&m);
    for(i=0;i<m;i++){
cin>>str>>str2;
       k=name[str];
       l=name[str2];
        vc[k].push_back(l);
        tt[k]=1;
        tt1[l]=1;
        para[k][l]=100;
        para[l][k]=100;
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
    r=1;
 for(i=count;i>=1;i--){
    for(j=0;j<ty[i].size();j++){
        ara[r]=ty[i][j];
r++;
            }
 }
while(1){
        f=0;
    for(i=1;i<=n;i++){
            h=ara[i];
          g=ara[i+1];
    if(h>g&&para[h][g]!=100&&para[g][h]!=100){
    t=ara[i];
    ara[i]=ara[i+1];
    ara[i+1]=t;
    l++;
f=1;
    }
    }
    if(f==0)break;
    }
 printf("Case #%d: Dilbert should drink beverages in this order: ",u);
 u++;
 for(i=1;i<=n;i++){
     if(i<n)
   cout<<me[ara[i]]<<" ";
else  cout<<me[ara[i]]<<"."<<endl<<endl;
 }
   for(i=1;i<=n;i++){
    vc[i].clear();
   }
   for(i=count;i>=1;i--){
    ty[i].clear();
   }
   name.clear();
   me.clear();
}
return 0;
}
