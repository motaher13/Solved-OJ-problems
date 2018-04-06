#include <stdio.h>
#include <map>
#include <queue>
#include <vector>
using namespace std;
int visited[50000];
int level[50000];
int v,w,e;
vector<int>vc[50000];
void bfs(int p){
    int i;
    queue<int>q;
     q.push(p);
     while(!q.empty()){
        v=q.front();
        q.pop();
        for(i=0;i<vc[v].size();i++){
            w=vc[v][i];
            if(visited[w]==0){
                    visited[w]=9;
            level[w]=level[v]+1;
            if(level[w]<=e){
                visited[w]=1;
                q.push(w);
            }
        }
        }
     }

}
int main()
{
    int i,j,k,l,m,n,s,t,x,y,count,r=1;
    while(scanf("%d",&n)){
            if(n==0)break;
     map<int,int>name;
       map<int,int>::iterator it;
    for(i=0;i<n;i++){
        scanf("%d%d",&k,&l);
        name[k]=1;
        name[l]=1;
        vc[k].push_back(l);
        vc[l].push_back(k);
    }
    while(scanf("%d%d",&k,&e)){
            if(k==0&&e==0){
               for(it=name.begin();it!=name.end();it++){
                        x=it->first;
                    vc[x].clear();

                }
               name.clear();
               break;
            }

    for(it=name.begin();it!=name.end();it++){
        visited[it->first]=0;
    }
    visited[k]=1;
    level[k]=0;
    bfs(k);
    count=0;
    for(it=name.begin();it!=name.end();it++){
        if(visited[it->first]!=1)count++;
    }
    printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",r++,count,k,e);
    }
    }
    return 0;
}
