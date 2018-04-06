#include <stdio.h>
#include <queue>
using namespace std;
char str[1100][1100];
int time[1100][1100];
int level[1100][1100];
int visit[1100][1100];
int visit2[11000][11000];
int x[10]={1,-1,0,0};
int y[10]={0,0,1,-1};
int n,m,v,w,r,s,k,ck;
  queue<int>q;
void bfs(){
  while(!q.empty()){
        v=q.front();
        q.pop();
        w=q.front();
        q.pop();
      for(k=0;k<4;k++){
        r=v+x[k];
        s=w+y[k];
        if(r>=0&&r<n&&s>=0&&s<m&&visit[r][s]==0&&str[r][s]=='.'){
            visit[r][s]=1;
            level[r][s]=level[v][w]+1;
            q.push(r);
            q.push(s);
         }
      }
    }
}
void bfs2(){
     while(!q.empty()){
        v=q.front();
        q.pop();
        w=q.front();
        q.pop();
        for(k=0;k<4;k++){
            r=v+x[k];
            s=w+y[k];
            if(r>=0&&r<n&&s>=0&&s<m&&visit2[r][s]==0&&str[r][s]=='.'){
                visit2[r][s]=1;
                time[r][s]=time[v][w]+1;
                if(time[r][s]<level[r][s]){
                    if(r==0||r==n-1||s==0||s==m-1){
                        ck=time[r][s];
                        break;
                    }
                    else {
                        q.push(r);
                        q.push(s);
                    }
                }
            }
        }
        if(ck!=0)break;
     }
}
int main()
{
    int i,j,k,l,t,p,u;
    scanf("%d",&t);
    while(t--){
    scanf("%d%d",&n,&m);

    for(i=0;i<n;i++){
    scanf("%s",str[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(str[i][j]=='F'){
                level[i][j]=0;
                visit[i][j]=1;
                q.push(i);
                q.push(j);
            }
            else visit[i][j]=0;
            if(str[i][j]=='J'){
                visit[i][j]=1;
                p=i;
                u=j;
            }
        }
    }
    bfs();
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(str[i][j]=='J')visit2[i][j]=1;
            else if(str[i][j]=='.')visit2[i][j]=0;
        }
    }
    ck=0;
    q.push(p);
    q.push(u);
    if(p==0||p==n-1||u==0||u==m-1)printf("1");
    else{
    time[p][u]=0;
    bfs2();
    if(ck==0)printf("IMPOSSIBLE");
    else printf("%d",ck+1);
    }
    printf("\n");
    while(!q.empty()){
        q.pop();
    }
    }
    return 0;
}
