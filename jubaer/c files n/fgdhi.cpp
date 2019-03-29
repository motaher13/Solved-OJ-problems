#include <stdio.h>
int x[]={0,0,1,-1};
int y[]={1,-1,0,0};

int visited[100][100];
int ck,count,n,m,r,s;
char str[100][100];
void dfs(char ch,int p,int q){
    if(p==r&&q==s)ck=-1;
    count++;
    int i,v,w;
   visited[p][q]=1;
   for(i=0;i<4;i++){
    v=p+x[i];
    w=q+y[i];
    if(w==m)w=0;
    else if(w==-1)w=m-1;
    if(visited[v][w]==0&&v>=0&&v<n&&w>=0&&w<m&&str[v][w]==ch){
        dfs(ch,v,w);
    }

   }

}
int main()
{
   int i,j,k,l,max;
   char ch;
   while(scanf("%d%d",&n,&m)==2){

   max=0;
   for(i=0;i<n;i++)scanf("%s",str[i]);
   for(i=0;i<n;i++)
    for(j=0;j<m;j++)visited[i][j]=0;
   scanf("%d%d",&r,&s);
   ch=str[r][s];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(str[i][j]==ch&&visited[i][j]==0){
                count=0;
                ck=0;
                dfs(str[i][j],i,j);
                if(ck==0){
                if(max<count)max=count;
                }
            }
        }
    }
    printf("%d",max);
    printf("\n");
   }
   return 0;
}
