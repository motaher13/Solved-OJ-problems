#include <stdio.h>
#include <string.h>
char str[500][500];
int count;
void func(int p,int q){
int i=p,j=q;
str[i][j]='6';
count++;
 if(str[i-1][j]=='1') func(i-1,j);
     if(str[i-1][j+1]=='1') func(i-1,j+1);
      if(str[i-1][j-1]=='1') func(i-1,j-1);
      if(str[i+1][j]=='1') func(i+1,j);
       if(str[i][j+1]=='1') func(i,j+1);
   if(str[i][j-1]=='1')func(i,j-1);
      if(str[i+1][j+1]=='1') func(i+1,j+1);
      if(str[i+1][j-1]=='1')func(i+1,j-1);
    str[i][j]='8';


}
int main()
{

    int i,j,k,l,r,max,t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--){
            i=0;
    while(gets(str[i])){
        if(strcmp(str[i],"\0")==0)break;
        i++;
    }
    k=i;
    max=0;
    l=0;
    for(i=0;i<k;i++){
        for(j=0;j<strlen(str[i]);j++){
            if(str[i][j]=='1'){
                    count=0;
                func(i,j);
                if(max<count)max=count;
            }
        }

    }

  printf("%d\n",max);
 if(t>0)printf("\n");
    }
    return 0;
}
