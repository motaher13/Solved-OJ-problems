#include <stdio.h>
#include <iostream>
#include <queue>
int x[6]={1,-1,0,0};
int y[6]={0,0,1,-1};
int level[100][100],visit[100][100];
   int ara[100][100];
using namespace std;
int main()
{
    queue<int>q;
    int i,j,k,l,m,n,s,t,e,f,p,d,v,w,ck=0;
char str2[100];
scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
                scanf("%d",&ara[i][j]);
            if(ara[i][j]==0)visit[i][j]=0;
            else visit[i][j]=1;
        }
    }

    scanf("%d%d%d%d%s",&s,&t,&e,&f,str2);
    q.push(s);
    q.push(t);
    visit[s][t]=1;
    level[s][t]=1;
    while(!q.empty()){
        v=q.front();
        q.pop();
        w=q.front();
        q.pop();
        for(i=0;i<4;i++){
                    p=v+x[i];
                  d=w+y[i];
                if(ara[p][d]==0&&visit[p][d]==0&&p>=0&&p<=n-1&&d>=0&&d<=m-1){
                    visit[p][d]=1;
                    level[p][d]=level[v][w]+1;
                    q.push(p);
                    q.push(d);
                    if(p==e&&d==f){
                        ck= level[p][d];
                        break;
                    }
                }


            }
             if(ck!=0)break;
        }


    printf("%d",ck);
}


