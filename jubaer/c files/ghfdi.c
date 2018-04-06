#include <stdio.h>
int main()
{
    char str[100][1000];
    int i,j,k,l,n,m,ck;
   while(scanf("%d%d",&n,&m)){
    for(i=0;i<n;i++){
    scanf("%s",str[i]);
    }
    l=0;
    for(i=0;i<n;i++){

    for(j=0;j<m;j++){
            ck=0;
    if(str[i][j]=='@'){
        ck=1;
    if(str[i][j+1]=='@'&&j<m-1)str[i][j+1]=' ';
    else if(str[i][j+1]==' '&&j<m)ck=0;
    if(str[i][j-1]=='@'&&j>0)str[i][j-1]=' ';
     else if(str[i][j-1]==' '&&j>0)ck=0;
    if(str[i+1][j]=='@'&&i<n-1)str[i+1][j]=' ';
    else if(str[i+1][j]==' '&&i<n-1)ck=0;
    if(str[i-1][j]=='@'&&i>0)str[i-1][j]=' ';
     else if(str[i-1][j]==' '&&i>0)ck=0;
    if(str[i+1][j+1]=='@'&&i<n-1&&j<m-1)str[i+1][j+1]=' ';
     else if(str[i+1][j+1]==' '&&i<n-1&&j<m-1)ck=0;
    if(str[i-1][j+1]=='@'&&i>0&&j<m-1)str[i-1][j+1]=' ';
     else if(str[i-1][j+1]==' '&&i>0&&j<m-1)ck=0;
     if(str[i+1][j-1]=='@'&&i<n-1&&j>0)str[i+1][j-1]=' ';
      else if(str[i+1][j-1]==' '&&i<n-1&&j>0)ck=0;
    if(str[i-1][j-1]=='@'&&i>0&&j>0)str[i-1][j-1]=' ';
     else if(str[i-1][j-1]==' '&&i>0&&j>0)ck=0;
     str[i][j]=' ';
    }
   if(ck==1)l++;
    }
    }
   printf("%d\n",l);
   }
}
