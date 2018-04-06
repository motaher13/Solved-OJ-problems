#include <stdio.h>
#include <queue>
using namespace std;
int visited[100][100];
int level[100][100];
int x[24]={2,-2,1,-1};
int y[23]={1,-1,1,-1,2,-2,2,-2};
int main()
{
    char str[10],str2[10];
    int i,j,k,l,s,t,ck,v,w,h,g;
   while(scanf("%s%s",str,str2)==2){
        for(i=1;i<=8;i++){
           for(j=1;j<=8;j++){
               visited[i][j]=0;
           level[i][j]=0;
           }
        }
   i=(int)str[0]-96;
   j=(int)str[1]-48;
    queue<int>q;
   q.push(i);
   q.push(j);
   visited[i][j]=1;
   level[i][j]=0;
   s=(int)str2[0]-96;
    t=(int)str2[1]-48;
    ck=0;
    while(!q.empty()){
        v=q.front();
        q.pop();
        w=q.front();
        q.pop();
        l=0;
       for(i=0;i<4;i++){
        for(j=0;j<2;j++){
                h=v+x[i];
        g=w+y[l];
            if(h<=8&&h>=1&&g<=8&&g>=1&&visited[h][g]==0){
                visited[v+x[i]][w+y[l]]=1;
                level[v+x[i]][w+y[l]]=level[v][w]+1;
                if(s==(v+x[i])&&t==(w+y[l])){
                    ck= level[v+x[i]][w+y[l]];
                    break;
                }
                q.push(v+x[i]);
                q.push(w+y[l]);

            }
             l++;
       }
          if(ck!=0)break;
       }

        if(ck!=0)break;
    }
    printf("To get from %s to %s takes %d knight moves.\n",str,str2,ck);
    getchar();
   }
   return 0;
}
