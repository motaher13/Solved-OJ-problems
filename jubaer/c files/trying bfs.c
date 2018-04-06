#include <stdio.h>
int main()
{
  //  int n;
    int rela[100][100],visited[100],que[100],n,m,k,i,j,front=0,l,visit[100],max,v;
    printf("enter number of nodes\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    visited[i]=0;
    visit[i]=0;
    }
    printf("number of vertices along with vertices\n");
    scanf("%d",&m);
    for(i=0;i<m;i++){
    for(j=0;j<m;j++){
    rela[i][j]=0;
    }

    }
    for(k=0;k<m;k++){
    scanf("%d%d",&i,&j);
    rela[i][j]=1;
    }
    printf("enter starting vertex\n");
    scanf("%d",&v);
    printf("%d ",v);
    visited[v]=1;
    visit[v]=1;
    que[front]=v;
    front++;
    k=1;
    max=1;
    while(k<n){
  //  max=3456346;
    for(i=0;i<n;i++){
    if(rela[v][i]==1&&visited[i]==0&&visit[i]==0){
    visit[i]=1;
    que[front]=i;
  //  if(max<front)max=front;
    front++;
    }
    }
    v=que[max];
    printf("%d ",v);
    visited[v]=1;
    max++;
k++;
    }



}
