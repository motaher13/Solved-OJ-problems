#include <stdio.h>
#include <vector>
#include <queue>
#include <map>
#include <string>
#include <iostream>
using namespace std;
vector<int>vc[1000];
int visited[1000],level[1000];
string name[100];
int d;
string str;
void bfs(int p){
    int i,j,k,v;
    queue<int>q;
   level[p]=0;
   visited[p]=1;
   printf("p=%d\n",p);
   name[p]="white";
   q.push(p);
   while(!q.empty()){
    v=q.front();
    q.pop();
    for(i=0;i<vc[v].size();i++){
        p=vc[v][i];
        if(visited[p]==1){
            cout<<name[v]<<" "<<v<<" "<<p<<" "<<name[p]<<endl;
            if(name[p]==name[v]){

                d=-1;
                break;
            }
            else if(visited[p]==0){
                visited[p]=1;{
                if(name[v]=="white")name[p]="black";
                else name[p]="white";

                }
                cout<<name[p]<<" "<<p<<endl;
                level[p]=level[v]+1;
                d=level[p];
                q.push(p);
            }
        }

    }


   // if(d==-1)break;
   }

}
int main()
{
    int i,j,k,l,m,n,sum;
    scanf("%d%d",&n,&m);
    sum=0;
    for(i=0;i<n;i++){
        visited[i]=0;
        name[i]="blue";
    }
    for(i=0;i<m;i++){
        scanf("%d%d",&k,&l);
        vc[k].push_back(l);
        vc[l].push_back(k);
    }
for(i=0;i<n;i++)
    for(j=0;j<vc[i].size();j++)printf("%d %d\n",vc[i][j],i);
    //printf("%d",sum);
}
