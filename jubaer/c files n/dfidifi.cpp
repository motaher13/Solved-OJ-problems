#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <string>
using namespace std;
map<int,string>name;
int visited[2500],a,b,ck;
vector<int>vc[2500];
int min(int a,int b){
if(a<b)return a;
else return b;
}
void dfs(int p){
  int i,j,k,v,w;
    visited[p]=1;
    a=0;
    b=0;
    name[p]="white";
    a++;
    queue<int>q;
    q.push(p);
    while(!q.empty()){
        v=q.front();
        q.pop();
        for(i=0;i<vc[v].size();i++){
            w=vc[v][i];
            if(visited[w]==1){
                if(name[v]==name[w]){
                    ck=-1;
                    break;
                }
            }
            else if(visited[w]==0){
                visited[w]=1;
                if(name[v]=="black"){
                    name[w]="white";
                    a++;
                }
                else if(name[v]=="white"){
                    name[w]="black";
                    b++;
                }
                q.push(w);
            }
        }
      if(ck==-1)break;
    }
}
int main()
{
    int i,j,k,l,m,n,sum,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d%d",&n,&m);
    for(i=0;i<=n;i++){
        visited[i]=0;
        name[i]="blue";
        vc[i].clear();
    }
    for(i=0;i<m;i++){
        scanf("%d%d",&k,&l);
        vc[k].push_back(l);
        vc[l].push_back(k);
    }
    sum=0;
    ck=0;
    for(i=0;i<n;i++){
        if(visited[i]==0){
            dfs(i);
   if(ck==-1)break;
           if(a!=0&&b!=0){
            sum=sum+min(a,b);
           }
           else{
            if(a==0)sum=sum+b;
            else if(b==0)sum=sum+a;
           }

        }
    }
    if(ck==0)
    printf("%d",sum);
    else if(ck==-1)printf("-1");
    printf("\n");
    name.clear();
    }
    return 0;
}
