#include <stdio.h>
#include <string.h>
char str[500][500];
int count;
void func(int p,int q){
int i=p,j=q;
str[i][j]='6';
count++;
 if(str[i-1][j]=='*') func(i-1,j);
     if(str[i-1][j+1]=='*') func(i-1,j+1);
      if(str[i-1][j-1]=='*') func(i-1,j-1);
      if(str[i+1][j]=='*') func(i+1,j);
       if(str[i][j+1]=='*') func(i,j+1);
   if(str[i][j-1]=='*')func(i,j-1);
      if(str[i+1][j+1]=='*') func(i+1,j+1);
      if(str[i+1][j-1]=='*')func(i+1,j-1);
    str[i][j]='0';
}
int main()
{
    int i,j,k,l,r,u;
    while(scanf("%d %d",&k,&r)){
            if(k==0&&r==0)break;
            u=0;
    for(i=0;i<k;i++){
        scanf("%s",str[i]);

    }
    l=0;
    for(i=0;i<k;i++){
        for(j=0;j<r;j++){
            if(str[i][j]=='*'){
                    l++;
                 count=0;
                func(i,j);
                if(count==1)u++;
            }
        }

    }
  printf("%d",u);
  printf("\n");
    }
    return 0;
}
