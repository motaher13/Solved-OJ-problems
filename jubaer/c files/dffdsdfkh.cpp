#include <stdio.h>
#include <queue>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;
queue<int>q;
int s[10000];
int ck,u,h;
char str[1000][1000];
int level[1000][1000];
int visit[1000][1000];
void bfs(int p,int r){
   int i,j,v,w;
   i=p;
   j=r;
   visit[i][j]=1;
   q.push(p);
   s[u]=r;
   u++;
   while(!q.empty()){
    v=q.front();
    w=s[h];
    h++;
    q.pop();
        if((str[v+1][w]=='.'||str[v+1][w]=='B')&&visit[v+1][w]==0){
            visit[v+1][w]=1;
            if(str[v+1][w]=='B'){
               ck=level[v+1][w]=level[v][w]+1;
                 return;
            }
            str[v+1][w]='p';
            level[v+1][w]=level[v][w]+1;
            q.push(v+1);
            s[u]=w;
            u++;
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
            s[u]=w+1;
            u++;
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
            s[u]=w-1;
            u++;
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
            s[u]=w+1;
            u++;
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
            s[u]=w-1;
            u++;
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
            s[u]=w;
            u++;
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
            s[u]=w+1;
            u++;
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
            s[u]=w-1;
            u++;
        }
   }

}
int main()
{
    int i,j,k,l,m,n;
    scanf("%d",&l);
    while(l--){
    scanf("%d%d",&n,&m);
    ck=0;
    u=0;
    h=0;
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
     for(i=0;i<n;i++){
        strcpy(str[i],"\0");
     }
if(ck!=0)printf("Minimal possible length of a trip is %d\n",ck);
else printf("King Peter, you can't go now!\n");
while(!q.empty()){
    q.pop();
}
for(i=0;i<h;i++){
    s[h]=0;
}
    }
   return 0;
}
