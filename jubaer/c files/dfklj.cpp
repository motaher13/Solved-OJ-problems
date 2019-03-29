#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
int visited[10000];
int level[10000],l,ck;

vector<int>vc[30];
void bfs(int p){
 queue<int>q;
     int v,w,x,i;
     visited[p]=1;
     q.push(p);
     while(!q.empty()){
        v=q.front();
        q.pop();
        for(i=0;i<vc[v].size();i++){
            w=vc[v][i];
            if(visited[w]==0){
                visited[w]=1;
                level[w]=level[v]+1;
                q.push(w);
                if(w==l){
                    ck=level[w];
                    break;
                }
            }
        }
        if(ck!=0)break;
     }
}
int main()
{
    int i,j,k,m,n,p,r,s=1;
    while(scanf("%d",&n)==1){
    for(i=1;i<=19;i++){
            visited[i]=0;
        if(i>1)scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&m);
            vc[i].push_back(m);
            vc[m].push_back(i);
        }
    }
   scanf("%d",&p);
   printf("Test Set #%d\n",s++);
   while(p--){
        ck=0;
    scanf("%d %d",&k,&l);
   for(i=1;i<=20;i++)visited[i]=0;
    level[k]=0;
    bfs(k);
   if(ck!=0)
   printf("%2d to %2d: %d\n",k,l,ck);
   else  printf("%2d to %2d: 10000\n",k,l,ck);
   }
   printf("\n");
   for(i=1;i<=20;i++)vc[i].clear();
    }
    return 0;
}
