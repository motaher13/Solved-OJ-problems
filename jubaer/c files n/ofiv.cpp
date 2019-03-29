#include <stdio.h>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;
int visited[100][100],count;
int x[]={0,0,1,-1,1,1,-1,-1};
int y[]={1,-1,0,0,1,-1,1,-1};
char  str[100][100];
void def(int p,int q){
    int i;
    int v,w;
    str[p][q]='*';
  visited[p][q]=1;
  count++;
  for(i=0;i<8;i++){
    v=p+x[i];
    w=q+y[i];
   // printf("%d %d\n",v,w);
    if(visited[v][w]==0){
            def(v,w);
           // count++;
    }
  }
}

int main()
{
 int num,ara[10];
 int i,j,k,l,m,n,ck,p;
 i=0;
 ck=1;
 while(1){
    gets(str[i]);
    if((str[i][0]!='W'&&str[i][0]!='L')||ck==0){
            stringstream ss(str[i]);

    p=0;
    while(ss>>num){
        ara[p]=num-1;
        p++;
    }
    printf("%d %d\n",ara[0],ara[1]);
      ck=0;
      k=i;
      for(l=0;l<k;l++)
        for(j=0;j<strlen(str[l]);j++)visited[l][j]=0;
      count=0;
        def(ara[0],ara[1]);
        printf("%d\n",count);

        }



    }

    i++;
 }



