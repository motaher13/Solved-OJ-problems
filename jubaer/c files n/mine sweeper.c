#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000][1000];
    int m,n,i,j,k,l;
    k=1;
    while(scanf("%d%d",&n,&m)){
            if(m==0&&n==0)break;
    for(i=0;i<n;i++){

        gets(str[i]);
        if(strlen(str[i])==0)n++;
    }

    for(i=1;i<n;i++){

    for(j=0;j<m;j++){
            l=0;
    if(str[i][j]=='.'){
    if(str[i-1][j]=='*')l++;
     if(str[i+1][j]=='*')l++;
      if(str[i][j+1]=='*')l++;
       if(str[i][j-1]=='*')l++;
        if(str[i+1][j-1]=='*')l++;
         if(str[i+1][j+1]=='*')l++;
          if(str[i-1][j-1]=='*')l++;
         if(str[i-1][j+1]=='*')l++;
          if(str[i-2][j]=='*'&&strlen(str[i-1])==0)l++;
     if(str[i+2][j]=='*'&&strlen(str[i+1])==0)l++;
        if(str[i+2][j-1]=='*'&&strlen(str[i+1])==0)l++;
         if(str[i+2][j+1]=='*'&&strlen(str[i+1])==0)l++;
          if(str[i-2][j-1]=='*'&&strlen(str[i-1])==0)l++;
         if(str[i-2][j+1]=='*'&&strlen(str[i-1])==0)l++;
    str[i][j]=(char)l+'0';
    }
    }
    }
    if(k>1)printf("\n");
    printf("Field #%d:\n",k);
   for(i=1;i<n;i++){
   for(j=0;j<m;j++){
   if(i==1&&str[i][j]!='\0'){
    printf("%c",str[i][j]);
    if(j==m-1)printf("\n");
   }
   else if(i>1){
    printf("%c",str[i][j]);
    if(j==m-1)printf("\n");
   }

   }


   }
     for(i=0;i<=n;i++){
   for(j=0;j<m;j++){
        str[i][j]='\0';
   }
     }
   k++;
    }
    return 0;
}
