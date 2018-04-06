#include <stdio.h>
#include <string.h>
#include <sstream>
using namespace std;
int visited[109][109];
char str[109][109];
int x[]={0,0,1,-1,1,1,-1,-1};
int y[]={1,-1,0,0,1,-1,1,-1};
int count;
void def(int p,int q){
visited[p][q]=1;
int i,v,w;
count++;
for(i=0;i<8;i++){

     v=x[i]+p;
     w=y[i]+q;
    if(visited[v][w]==0&&str[v][w]=='W'){
        def(v,w);
    }
}
}
int main()
{
    int i=0,j,k,l,m,n,num,ara[10],t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--){
            i=0;
   while( gets(str[i])){

    if(strcmp(str[i],"\0")==0)break;
    if(str[i][0]!='L'&&str[i][0]!='W'){
            k=i;
      sscanf(str[i],"%d %d",&ara[0],&ara[1]);
     for(m=0;m<k;m++)
        for(j=0;j<strlen(str[m]);j++)visited[m][j]=0;
      count=0;
      def(ara[0]-1,ara[1]-1);
      printf("%d\n",count);

    }
    else i++;
   }
   i=0;
   if(t>0)
   printf("\n");
    }
    return 0;
}
