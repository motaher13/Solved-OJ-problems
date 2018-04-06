#include <stdio.h>
#include <string.h>
char str[500][500];
int count;
void func(int p,int q){
int i=p,j=q;
str[i][j]='6';
 if(str[i-1][j]=='*') {
        return;
    //func(i-1,j);
}
     if(str[i-1][j+1]=='*'){
        return ;
     // func(i-1,j+1);
     }
      if(str[i-1][j-1]=='*') return;
      if(str[i+1][j]=='*') return;
       if(str[i][j+1]=='*') retu;
   if(str[i][j-1]=='*')func(i,j-1);
      if(str[i+1][j+1]=='*') func(i+1,j+1);
      if(str[i+1][j-1]=='*')func(i+1,j-1);
    str[i][j]='0';
    count++;
    printf("%d %d %d\n",count,i,j);

}
int main()
{

    int i,j,k,l,r,u=0;
    while(scanf("%d %d",&k,&r)){
            if(k==0&&r==0)break;
            count=0;
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
                 if(count==1){
                            u++;

                    }
            }
        }

    }

  printf("%d %d\n",l,u);
    }
    return 0;
}
