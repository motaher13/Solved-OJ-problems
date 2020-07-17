#include <stdio.h>
#include <string.h>
char str[500][500];
void func(int p,int q){
int i=p,j=q;
str[i][j]='6';
 if(str[i-1][j]=='@') func(i-1,j);
     if(str[i-1][j+1]=='@') func(i-1,j+1);
      if(str[i-1][j-1]=='@') func(i-1,j-1);
      if(str[i+1][j]=='@') func(i+1,j);
       if(str[i][j+1]=='@') func(i,j+1);
   if(str[i][j-1]=='@')func(i,j-1);
      if(str[i+1][j+1]=='@') func(i+1,j+1);
      if(str[i+1][j-1]=='@')func(i+1,j-1);
    str[i][j]='0';


}
int main()
{

    int i,j,k,l,r;
    while(scanf("%d %d",&k,&r)){
            if(k==0&&r==0)break;
    for(i=0;i<k;i++){
        scanf("%s",str[i]);

    }
    l=0;
    for(i=0;i<k;i++){
        for(j=0;j<r;j++){
            if(str[i][j]=='@'){
                    l++;

                func(i,j);
            }
        }

    }

  printf("%d\n",l);
    }
    return 0;
}
