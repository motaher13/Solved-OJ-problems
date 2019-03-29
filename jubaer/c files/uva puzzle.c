#include <stdio.h>
int main()
{
    char str[1000],puz[100][1000];
    int i,j,k,ck,t;
    for(i=0;i<5;i++){
    gets(puz[i]);
    }

    gets(str);
    for(k=0;k<strlen(str)-1;k++){
    if(str[k]=='A'){
      for(i=0;i<5;i++){
        for(j=0;j<5;j++){
          if(i==0&&puz[i][j]==(int)32){
         printf("no");
        ck=1;
        break;
    }
    else if(puz[i][j]==(int)32&&i>=1){
         t=puz[i][j];
         puz[i][j]=puz[i-1][j];
         puz[i-1][j]=t;
        ck=0;
        break;
        }

    }
    if(ck==0){
        printf("kutta\n");
            break;
    }
    else if(ck==1){
        printf("mor");
        break;

    }
    }
    }
    if(ck==1){
        printf("suck");
            break;

    }
    }
    if(ck!=1)printf("yagoo");
}
