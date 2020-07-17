#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100][10];
    int i,r,j,k,l,ck,m,n,v,rela[200][200],stack[200],visited[200],de[200],top;

  r=1;
    while(cin>>n>>m){
ck=1;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        rela[i][j]=0;
    }


}
    for(k=0;k<m;k++){
    cin>>i>>j;
    rela[i][j]=1;
   if(k==0)v=i;
    }


 top=0;
    for(k=0;k<n;k++){
    visited[k]=0;
    de[k]=0;
    strcpy(str[k],"brown");
    }

    //cout<<v<<endl;
    stack[top]=v;
    strcpy(str[v],"white");
    top++;
    visited[v]=1;
    k=1;
    while(k<n){
    for(j=n-1;j>=0;j--){
           if(rela[j][v]!=1){
   if((rela[v][j]==1)&&strcmp(str[v],str[j])==0){
      //  printf("%d %d %s %s k=%d\n",v,j,str[v],str[j],k);
        ck=0;
        break;
   }
            }
    if(rela[v][j]==1&&visited[j]==0&&de[j]==0){
        //if(str[j]==str[v])printf("no\n");
    de[j]=1;
    stack[top]=j;
  if(strcmp(str[v],"white")==0)

   strcpy(str[j],"yellow");
    if(strcmp(str[v],"yellow")==0)
   strcpy(str[j],"white");
   //printf("omg: %d %d \n",v,j);
    //strcpy(str[j],"white");
    top++;
    }
    }
    top=top-1;
    v=stack[top];
   // cout<<" "<<v;
    k++;
    visited[v]=1;
de[v]=0;
if(ck==0)break;



    }
  if(ck==0)printf("%d : not",r);
  else printf("%d : yes",r);
  r++;
  printf("\n");
  for(i=0;i<n;i++)strcpy(str[i],"brown");
  //for(i=0;i<n;i++){
    //printf("%s %d\n",str[i],i);
  }



}
