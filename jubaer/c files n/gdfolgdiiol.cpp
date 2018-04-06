#include <stdio.h>
#include <queue>
using namespace std;
char str[1000][1000];
int level[100][100];
int visit[100][100];
int main()
{
    queue<int>q;
    int i,j,k,l,m,n,r,s,t,v,w;
    scanf("%d%d",&n,&m);
    getchar();
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
          str[i][j]=getchar();
            if(str[i][j]=='F'){
                level[i][j]=0;
                visit[i][j]=1;
                q.push(i);
                q.push(j);
            }
            else visit[i][j]=0;
        }
        getchar();

    }
    while(!q.empty()){
        v=q.front();
        q.pop();
        w=q.front();
        q.pop();
        if(str[v][w+1]=='.'&&visit[v][w+1]==0){
            visit[v][w+1]=1;
            str[v][w+1]='p';
            level[v][w+1]=level[v][w]+1;
            q.push(v);
            q.push(w+1);
        }
          if(str[v][w-1]=='.'&&visit[v][w-1]==0){
            visit[v][w-1]=1;
            str[v][w-1]='p';
            level[v][w-1]=level[v][w]+1;
            q.push(v);
            q.push(w-1);
        }
          if(str[v+1][w]=='.'&&visit[v+1][w]==0){
            visit[v+1][w]=1;
            str[v+1][w]='p';
            level[v+1][w]=level[v][w]+1;
            q.push(v+1);
            q.push(w);
        }
          if(str[v-1][w]=='.'&&visit[v-1][w]==0){
            visit[v-1][w]=1;
            str[v-1][w]='p';
            level[v-1][w]=level[v][w]+1;
            q.push(v-1);
            q.push(w);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            //printf("%c",str[i][j]);
            if(str[i][j]=='p'){
                printf("%d %d %d\n",level[i][j],i,j);
            }
        }
        printf("\n");
    }
}
