#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[100][10];
    int i,j,k,l,m,n,v,rela[100][100],stack[100],visited[100],de[100],top;
    top=0;
    cout<<"no pf vertices & edges"<<endl;
    cin>>n>>m;
    cout<<"no of relation"<<endl;
    for(k=0;k<m;k++){
    cin>>i>>j;
    rela[i][j]=1;

    }


    for(k=0;k<=n;k++){
    visited[k]=0;
    de[k]=0;
    }
    cout<<"input starting vertex"<<endl;
    cin>>v;
    cout<<v<<endl;
    stack[top]=v;
    strcpy(str[v],"white");
    top++;
    visited[v]=1;
    k=1;
    while(k<=n){
    for(j=n;j>=0;j--){
           if(rela[j][v]!=1){
   if((rela[v][j]==1)&&strcmp(str[v],str[j])==0)printf("no\n");
            }
    if(rela[v][j]==1&&visited[j]==0&&de[j]==0){
        //if(str[j]==str[v])printf("no\n");
    de[j]=1;
    stack[top]=j;
  if(strcmp(str[v],"white")==0)
   strcpy(str[j],"yellow");
    if(strcmp(str[v],"yellow")==0)
   strcpy(str[j],"white");
    //strcpy(str[j],"white");
    top++;
    }
    }
    top=top-1;
    v=stack[top];
    cout<<" "<<v;
    k++;
    visited[v]=1;
de[v]=0;




    }

  for(i=0;i<n;i++){
    printf("%s %d\n",str[i],i);
  }

}
