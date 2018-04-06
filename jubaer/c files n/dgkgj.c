#include <stdio.h>
#include <string.h>
char str[30][30];
void func(int p,int q){
int i=p,j=q;
str[i][j]='6';
 if(str[i-1][j]=='1') func(i-1,j);
     if(str[i-1][j+1]=='1') func(i-1,j+1);
      if(str[i-1][j-1]=='1') func(i-1,j-1);
      if(str[i+1][j]=='1') func(i+1,j);
       if(str[i][j+1]=='1') func(i,j+1);
   if(str[i][j-1]=='1')func(i,j-1);
      if(str[i+1][j+1]=='1') func(i+1,j+1);
      if(str[i+1][j-1]=='1')func(i+1,j-1);
    str[i][j]='9';
}
int main()
{
    int i,j,k,l,r,t=1;
    while(scanf("%d",&k)==1){
            r=k;
    for(i=0;i<k;i++){
        scanf("%s",str[i]);
    }
    l=0;
    for(i=0;i<k;i++){
        for(j=0;j<r;j++){
            if(str[i][j]=='1'){
                    l++;
             func(i,j);
            }
        }
    }
  printf("Image number %d contains %d war eagles.",t++,l);
  printf("\n");
    }
    return 0;
}
