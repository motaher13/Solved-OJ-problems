#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
void quicksort(int ara[],int p,int g);
int partition(int ara[],int p,int g);
void dfs(int r);
int visited[2000000],visit[2000000],count,num,try1[2000000],try2[20000000];
vector<int>vc[2000000];
vector<int>ty[2000000];
//vector<int>vc1[2000000];

 void dfs(int r){
     int i,v,start;
    start=count;
    if(visited[r]==1)
        return;

        visit[r]=1;
    for(i=0;i<vc[r].size();i++){

        v=vc[r][i];
        if(visit[v]!=1){
           // visit[v]=1;
         //  try2[v]=0;
                //printf("%d  %d\n",r,v);
           count++;
           // level[v]=level[r]+1;
          //  printf("%d %d ",v,level[v]);
        dfs(v);
        }
    }
    visited[r]=1;
    count++;
    ty[count].push_back(r);
    //printf("start:%d finish:%d %d\n",start,count,r);
//printf("%d ",r);
    return;
 }
 /* void def1(int r){
     int i,v,start;
  //  start=count;
    if(visited[r]==1)
        return;
       // printf("%d ",r);
        visit[r]=1;
       // printf("%d %d\n",r,num);
    for(i=0;i<vc[r].size();i++){

        v=vc[r][i];
        if(visit[v]!=1){
           // count++;
           // level[v]=level[r]+1;
          //  printf("%d %d ",v,level[v]);
        def1(v);
        }
    }
    visited[r]=1;
    //count++;
   // ara[r]=count;
    //printf("start:%d finish:%d %d\n",start,count,r);
//printf("%d ",r);
    return;
 }*/
int main()
{

    int n,m,starting,i,j,k,l,w,test,u;
scanf("%d",&test);
while(1){
    count=0;
   // printf("enter number of vertices\n");
    scanf("%d%d",&n,&m);
    u=n;
 //   printf("number of edges\n");
  //  scanf("%d",&m);
  for(i=1;i<=n;i++)vc[i].clear();


    for(i=0;i<m;i++){
scanf("%d%d",&k,&l);
       // scanf("%d%d",&k,&l);
        vc[k].push_back(l);
        try1[k]=1;
        try2[l]=1;
     // vc1[l].push_back(k);
       // vc[l].push_back(k);
    }
    for(i=1;i<=n;i++){

      visited[i]=0;
      visit[i]=0;
     // visit1[i]=0;
      //visited1[i]=0;
      list[i]=i;
    }
   // printf("input starting\n");
    for(i=1;i<=n;i++){
             if(try1[i]!=1&&try2[i]!=1){
            visited[i]=1;
            visit[i]=1;
    count++;
    ara[i]=count;
  //  printf("%d ",count);
        }
       else if(visit[i]==0&&try1[i]==1){
            dfs(i);
          //  try1[i]=0;
        }

    }
 // for(i=1;i<=n;i++)printf("%d  %d      ",list[i],ara[i]);
 k=1;
    quicksort(ara,k,u);
    num=0;
    for(i=1;i<=n;i++){
        visited[i]=0;
        visit[i]=0;
        ara[i]=0;
    }
    num=0;
  printf("dfh");

   // printf("%d\n",count);
  // printf("%d.....\n",vc1[1].size());
  // for(i=0;i<vc1[1].size();i++)printf("%d ",vc1[1][i]);
  /* for(i=n;i>=1;i--){
    if(visit[list[i]]==0){
            w=list[i];
            num++;
        def1(list[i]);
    }
   }
   printf("sum=%d\n",num);
   for(i=1;i<=n;i++){
    vc[i].clear();

   }*/
}
}
