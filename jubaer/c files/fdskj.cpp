#include <stdio.h>
#include <string.h>
char str[100][100];
char str2[100];
int visited[100][100];
int x[]={1,-1,0,0,1,1,-1,-1},ck=0,n,m,e,f;
int y[]={0,0,-1,1,1,-1,1,-1};
void dfs(int p,int q,int r){
    int v,w,i;
visited[p][q]=1;
if(str2[r+1]=='#'){
        e=p,f=q;
        ck=1;
        return;
}
for(i=0;i<8;i++){
 v=p+x[i];
 w=q+y[i];
    if(visited[v][w]==0&&str[v][w]==str2[r+1]&&v<n&&v>=0&&w>=0&&w<n){
        dfs(v,w,r+1);
    }

}

}
int main()
{
    int i,j,k,P,Q,sum=0,n=4,m=4,l;
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    ck=0;
    while(scanf("%s",str2)==1){
    strcat(str2,"#");
    ck=0;
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(str[i][j]==str2[0]){
            for(k=0;k<4;k++){
                for(l=0;l<4;l++){
                    visited[k][l]=0;
                }
            }
            //    P=i,Q=j;
            dfs(i,j,0);

        }
    }
   }
  if(ck==1){
        printf("%d\n",ck);
    sum=sum+1;
  }
  /* for(i=0;i<n;i++){
    for(j=0;j<n;j++){
       printf("%c",str[i][j]);
        }
          printf("\n");
   }*/}
   printf("%d",sum);


}
