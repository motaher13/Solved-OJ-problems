#include <stdio.h>
#include <string.h>
#include <map>
map<int,int >name;
char str[100][100];
char str2[100];
int visited[100][100];
int x[]={0,-1,1,1,-1,-1,1,0},ck=0,e,f;
int y[]={-1,-1,-1,0,0,1,1,1};
void dfs(int p,int q,int r){
    int v,w,i;
   // str[p][q]='@';

if(str2[r+1]==str2[strlen(str2)-1]){
        e=p,f=q;
        ck=1;
        return;
}
for(i=0;i<8;i++){
 v=p+x[i];
 w=q+y[i];
    if(visited[v][w]==0&&str[v][w]==str2[r+1]&&v<4&&v>=0&&w>=0&&w<4){
        dfs(v,w,r+1);
    }

}
//visited[p][q]=1;
}
int main()
{
    int i,j,k,P,Q,sum=0,n=4,m=4,l,t;
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    scanf("%d",&t);
    while(t--){
    ck=0;
  scanf("%s",str2);
   // strcat(str2,"#");
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
      k=strlen(str2);
        if(k==3||k==4)
       printf("%d\n",ck);
    sum=sum+1;
  }
  else if(k==5){
    sum=sum+2;
    printf("%d",ck);
  }
   else if(k==6){
    sum=sum+3;
  }
   else if(k==7){
    sum=sum+5;
  }
  else if(k>=8)sum=sum+11;
  /*for(i=0;i<n;i++){
    for(j=0;j<n;j++){
       printf("%c",str[i][j]);
        }
          printf("\n");
   }*/

  }
 printf("%d",sum);
}
