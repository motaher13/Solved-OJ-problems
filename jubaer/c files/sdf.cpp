#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
int x[]={0,0,1,-1,1,1,-1,-1,};
int y[]={1,-1,0,0,1,-1,1,-1};
char str[100][100],str2[100],ck=0;
int visited[100][100],level[100][100],d;
void bfs(int p,int s){
   queue<int>q;
   int v,w,i,j;
   visited[p][s]=1;
   level[p][s]=0;
   q.push(p);
   q.push(s);
   while(!q.empty()){
    p=q.front();
    q.pop();
    s=q.front();
    q.pop();
    for(i=0;i<8;i++){
        v=p+x[i];
        w=s+y[i];
        if(visited[v][w]==0){
            visited[v][w]=1;
            level[v][w]=level[p][s]+1;
            d=level[v][w];
            if(str2[d]==str[v][w]){
                    if(d==(strlen(str2)-1)){
                            ck=d;
                            break;
                    }
                q.push(v);
                q.push(w);
            }

        }
    }
    if(ck!=0)break;
   }



}
int main()
{
    int i,j,k,l,m,n;
    for(i=0;i<4;i++){
       scanf("%s",str[i]);
    }
    scanf("%s",str2);
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(str[i][j]==str2[0]){
                for(k=0;k<4;k++)
                    for(l=0;l<4;l++)visited[k][l]=0;
            }
                    bfs(i,j);
                    if(ck!=0){printf("found");
                    break;
                    }
                }
                if(ck!=0)break;
            }

        if(ck==0)printf("not");



}
