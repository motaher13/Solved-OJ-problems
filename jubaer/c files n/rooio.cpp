#include <stdio.h>
#include <queue>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;
queue<int>q;
queue<int>s;
int ck;
char str[10][10];
int level[100][100];
int visit[100][100];
void bfs(int p,int r){
   int i,j,v,w;
   i=p;
   j=r;
   visit[i][j]=1;
   q.push(p);
   s.push(r);

   while(!q.empty()&&!s.empty()){
    v=q.front();
    w=s.front();
    q.pop();
    s.pop();
  // printf("%d %d\n",v,w);
        if((str[v+1][w]=='.'||str[v+1][w]=='B')&&visit[v+1][w]==0){
            visit[v+1][w]=1;
            if(str[v+1][w]=='B'){
               ck=level[v+1][w]=level[v][w]+1;
                 return;

            }
            str[v+1][w]='p';
            level[v+1][w]=level[v][w]+1;
            q.push(v+1);
            s.push(w);
        }
         if((str[v+1][w+1]=='.'||str[v+1][w+1]=='B')&&visit[v+1][w+1]==0){
            visit[v+1][w+1]=1;
            if(str[v+1][w+1]=='B'){
                ck= level[v+1][w+1]=level[v][w]+1;
                return;
            }
            level[v+1][w+1]=level[v][w]+1;
             str[v+1][w+1]='p';
            q.push(v+1);
            s.push(w+1);
        }
         if((str[v+1][w-1]=='.'||str[v+1][w-1]=='B')&&visit[v+1][w-1]==0){
            visit[v+1][w-1]=1;
            if(str[v+1][w-1]=='B'){
                ck= level[v+1][w-1]=level[v][w]+1;
                return;
            }
             str[v+1][w-1]='p';
            level[v+1][w-1]=level[v][w]+1;
            q.push(v+1);
            s.push(w-1);
        }
         if((str[v][w+1]=='.'||str[v][w+1]=='B')&&visit[v][w+1]==0){
            visit[v][w+1]=1;
            if(str[v][w+1]=='B'){
                ck=level[v][w+1]=level[v][w]+1;
                return;
            }
             str[v][w+1]='p';
            level[v][w+1]=level[v][w]+1;
            q.push(v);
            s.push(w+1);
        }
         if((str[v][w-1]=='.'||str[v][w-1]=='B')&&visit[v][w-1]==0){
            visit[v][w-1]=1;
            if(str[v][w-1]=='B'){
                ck=level[v][w-1]=level[v][w]+1;
                return;
            }
             str[v][w-1]='p';
            level[v][w-1]=level[v][w]+1;
            q.push(v);
            s.push(w-1);
        }
          if((str[v-1][w]=='.'||str[v-1][w]=='B')&&visit[v-1][w]==0){
            visit[v-1][w]=1;
            if(str[v-1][w]=='B'){
                ck=level[v-1][w]=level[v][w]+1;
                return;
            }
             str[v-1][w]='p';
            level[v-1][w]=level[v][w]+1;
            q.push(v-1);
            s.push(w);
        }
         if((str[v-1][w+1]=='.'||str[v-1][w+1]=='B')&&visit[v-1][w+1]==0){
            visit[v-1][w+1]=1;
            if(str[v-1][w+1]=='B'){
                ck=level[v-1][w+1]=level[v][w]+1;
                return;
            }
             str[v-1][w+1]='p';
            level[v-1][w+1]=level[v][w]+1;
            q.push(v-1);
            s.push(w+1);
        }
         if((str[v-1][w-1]=='.'||str[v-1][w-1]=='B')&&visit[v-1][w-1]==0){
            visit[v-1][w-1]=1;
            if(str[v-1][w-1]=='B'){
                ck=level[v-1][w-1]=level[v][w]+1;
                return;
            }
             str[v-1][w-1]='p';
            level[v-1][w-1]=level[v][w]+1;
            q.push(v-1);
            s.push(w-1);
        }
   }

}
int main()
{
    int i,j,k,l,m,n;
    while(1){
    scanf("%d%d",&n,&m);
    ck=0;
    for(i=0;i<n;i++){
    scanf("%s",str[i]);
    }
for(i=0;i<n;i++){
for(j=0;j<m;j++){
        visit[i][j]=0;
        level[i][j]=0;
if(str[i][j]=='Z'){
if(str[i+2][j-1]!='A'&&str[i+2][j-1]!='B'&&str[i+2][j-1]!='Z')str[i+2][j-1]='X';
if(str[i+2][j+1]!='A'&&str[i+2][j+1]!='B'&&str[i+2][j+1]!='Z')str[i+2][j+1]='X';
if(str[i+1][j+2]!='A'&&str[i+1][j+2]!='B'&&str[i+1][j+2]!='Z')str[i+1][j+2]='X';
if(str[i+1][j-2]!='A'&&str[i+1][j-2]!='B'&&str[i+1][j-2]!='Z')str[i+1][j-2]='X';
if(str[i-2][j-1]!='A'&&str[i-2][j-1]!='B'&&str[i-2][j-1]!='Z')str[i-2][j-1]='X';
if(str[i-2][j+1]!='A'&&str[i-2][j+1]!='B'&&str[i-2][j+1]!='Z')str[i-2][j+1]='X';
if(str[i-1][j+2]!='A'&&str[i-1][j+2]!='B'&&str[i-1][j+2]!='Z')str[i-1][j+2]='X';
if(str[i-1][j-2]!='A'&&str[i-1][j-2]!='B'&&str[i-1][j-2]!='Z')str[i-1][j-2]='X';
}
}
}
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           if(str[i][j]=='A'){
                level[i][j]=0;
            bfs(i,j);
           }
        }

     }

if(ck!=0)printf("%d\n",ck);
else printf("im\n");

    }

}
