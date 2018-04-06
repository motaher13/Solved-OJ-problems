#include <stdio.h>
#include <queue>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;
queue<int>q;
int ck,u,h,n,m;
char fg[3],gf[3];
char str[1000][1000];
int level[1000][1000];
int visit[1000][1000];
void bfs(int p,int r){
   int i,j,v,w;
   i=p;
   j=r;
   visit[i][j]=1;
   q.push(p);
   q.push(r);
   u++;
   while(!q.empty()){
    v=q.front();
    q.pop();
    w=q.front();
    h++;
    q.pop();
        if((str[v+2][w+1]=='.'||str[v+2][w+1]=='B')&&visit[v+2][w+1]==0&&(v+2)<=8&&(w+1)<=8){
            visit[v+2][w+1]=1;
            if(str[v+2][w+1]=='B'){
               ck=level[v+2][w+1]=level[v+2][w]+1;
                 break;
            }
            str[v+2][w+1]='p';
            level[v+2][w+1]=level[v][w]+1;
            q.push(v+2);
            q.push(w+1);
        }
         if((str[v+2][w-1]=='.'||str[v+2][w-1]=='B')&&visit[v+2][w-1]==0&&(v+2)<=8&&(w-1)>=1){
            visit[v+2][w-1]=1;
            if(str[v+2][w-1]=='B'){
                ck= level[v+2][w-1]=level[v][w]+1;
                break;
            }
            level[v+2][w-1]=level[v][w]+1;
             str[v+2][w-1]='p';
            q.push(v+2);
            q.push(w-1);
        }
         if((str[v+1][w+2]=='.'||str[v+1][w+2]=='B')&&visit[v+1][w+2]==0&&(v+1)<=8&&(w+2)<=8){
            visit[v+1][w+2]=1;
            if(str[v+1][w+2]=='B'){
                ck= level[v+1][w+2]=level[v][w]+1;
                break;
            }
             str[v+1][w+2]='p';
            level[v+1][w+2]=level[v][w]+1;
            q.push(v+1);
            q.push(w+2);
        }
         if((str[v+1][w-2]=='.'||str[v+1][w-2]=='B')&&visit[v+1][w-2]==0&&(w-2)>=1&&(v+1)<=8){
            visit[v+1][w-2]=1;
            if(str[v+1][w-2]=='B'){
                ck=level[v+1][w-2]=level[v][w]+1;
                break;
            }
             str[v+1][w-2]='p';
            level[v+1][w-2]=level[v][w]+1;
            q.push(v+1);
            q.push(w-2);

        }
         if((str[v-2][w+1]=='.'||str[v-2][w+1]=='B')&&visit[v-2][w+1]==0&&w+1<=8&&v-2>=1){
            visit[v-2][w+1]=1;
            if(str[v-2][w+1]=='B'){
                ck=level[v-2][w+1]=level[v][w]+1;
                break;
            }
             str[v-2][w+1]='p';
            level[v-2][w+1]=level[v][w]+1;
            q.push(v-2);
            q.push(w+1);

        }
          if((str[v-2][w-1]=='.'||str[v-2][w-1]=='B')&&visit[v-2][w-1]==0&&v-2>=1&&w-1>=1){
            visit[v-2][w-1]=1;
            if(str[v-2][w-1]=='B'){
                ck=level[v-2][w-1]=level[v][w]+1;
                break;
            }
             str[v-2][w-1]='p';
            level[v-2][w-1]=level[v][w]+1;
            q.push(v-2);
            q.push(w-1);

        }
         if((str[v-1][w+2]=='.'||str[v-1][w+2]=='B')&&visit[v-1][w+2]==0&&v-1>=1&&w+2<=m){
            visit[v-1][w+2]=1;
            if(str[v-1][w+2]=='B'){
                ck=level[v-1][w+2]=level[v][w]+1;
                break;
            }
             str[v-1][w+2]='p';
            level[v-1][w+2]=level[v][w]+1;
            q.push(v-1);
            q.push(w+2);

        }
         if((str[v-1][w-2]=='.'||str[v-1][w-2]=='B')&&visit[v-1][w-2]==0&&v-1>=1&&w-2>=1){
            visit[v-1][w-2]=1;
            if(str[v-1][w-2]=='B'){
                ck=level[v-1][w-2]=level[v][w]+1;
                break;
            }
             str[v-1][w-2]='p';
            level[v-1][w-2]=level[v][w]+1;
            q.push(v-1);
            q.push(w-2);

        }
   }

}
int main()
{
    int i,j,k,l,f,g;
    while(scanf("%s%s",fg,gf)==2){
            n=8;
    m=8;
    ck=0;
    u=0;
    h=0;
for(i=1;i<=8;i++){
for(j=1;j<=8;j++){
        visit[i][j]=0;
        level[i][j]=0;
        str[i][j]='.';
}
}
i=(int)fg[0]-96;
j=(int)fg[1]-48;
f=i;
g=j;
str[i][j]='A';
i=(int)gf[0]-96;
j=(int)gf[1]-48;
str[i][j]='B';
  bfs(f,g);
     for(i=1;i<=8;i++){
        strcpy(str[i],"\0");
     }
printf("To get from %s to %s takes %d knight moves.\n",fg,gf,ck);
while(!q.empty()){
    q.pop();
}

    }
   return 0;
}

