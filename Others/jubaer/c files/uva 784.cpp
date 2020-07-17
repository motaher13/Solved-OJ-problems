#include <stdio.h>
#include <string.h>
 char str[120][120];
 int x[]={0,0,1,-1};
 int y[]={1,-1,0,0};
 int visited[100][100];
 int d;
void mark(int p,int q){
    int i,v,w;
    visited[p][q]=1;
  str[p][q]='#';
  for(i=0;i<4;i++){
    v=p+x[i];
    w=q+y[i];
    if(str[v][w]==' '&&visited[v][w]==0){
        mark(v,w);
    }
  }
}
int main()
{

    int i=0,j,k,l,p,q,r=0,g,h,ck,t;
    scanf("%d",&t);
    getchar();
    while(t--){
      ck=1;
      i=0;
        while(ck!=0){
            ck=1;
            gets(str[i]);
            if(strcmp(str[i],"\0")==0)ck=1;
            if(str[i][0]=='_')ck=0;
         i++;
         }
          k=i;
          d=i;
         for(i=0;i<k;i++){
        for(j=0;j<strlen(str[i]);j++){
        if(str[i][j]=='*'&&visited[i][j]==0){
        p=(int)str[i][j];
        mark(i,j);
            }
        }
    }
     for(i=0;i<k;i++){
            for(j=0;j<strlen(str[i]);j++){
       printf("%c",str[i][j]);
       visited[i][j]=0;
    }
    printf("\n");
     }
   for(i=0;i<k;i++)strcpy(str[i],"\0");
   i=0;
    }
    return 0;
}
