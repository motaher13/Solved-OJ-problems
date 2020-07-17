#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
  char str[250][10];
int i,r,j,k,l,ck,m,n,v,rela[300][300],stack[250],visited[250],de[250],top,q;
int main()
{

    while(scanf("%d",&n)){
            if(n==0)break;
            scanf("%d",&m);

ck=1;

for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        rela[i][j]=0;
    }
}
    for(k=0;k<m;k++){
    cin>>i>>j;
    rela[i][j]=1;

    }
    v=0;
 top=0;
    for(k=0;k<n;k++){
    visited[k]=0;
    de[k]=0;
    strcpy(str[k],"brown");
    }
    stack[top]=v;
    strcpy(str[v],"white");
    top++;
    visited[v]=1;
    k=0;
    while(k<n){
    for(j=n-1;j>=0;j--){
           if(rela[j][v]!=1){
   if((rela[v][j]==1)&&strcmp(str[v],str[j])==0){
        ck=0;
        break;
   }
            }
    if(rela[v][j]==1&&visited[j]==0&&de[j]==0){
    de[j]=1;
    stack[top]=j;
  if(strcmp(str[v],"white")==0)
   strcpy(str[j],"yellow");
    if(strcmp(str[v],"yellow")==0)
   strcpy(str[j],"white");
    top++;

    }
    }
    top=top-1;
    if(top>-1){
    v=stack[top];
    }
    else if(top<0){
        for(l=0;l<n;l++){
            if(visited[l]!=1){
                v=l;
                strcpy(str[v],"white");
                break;

            }
        }

    }
    k++;
    visited[v]=1;
de[v]=0;
if(ck==0)break;
    }
  if(ck==0)printf("NOT BICOLORABLE.");
  else printf("BICOLORABLE.");
  printf("\n");
  for(i=0;i<n;i++)strcpy(str[i],"brown");
  }
  return 0;
}
/*test cases:
5
5
0 1
1 2
2 3
3 4
4 0
6
6
1 0
2 0
3 2
4 3
5 4
4 1
4
6
1 0
2 1
3 2
2 0
3 0
1 3

4
3
1 0
2 0
3 2

3
3
1 0
2 0
1 2
2
1
1 0
0*/

