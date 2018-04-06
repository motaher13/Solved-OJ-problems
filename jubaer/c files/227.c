#include <stdio.h>
int main()
{
    int i,j,k,l,ck=0,p,tt=0,q=0;
    char str[5][5];
    char seq[100];
    for(i=0;i<5;i++){
    gets(str[i]);
    }
    scanf("%s",seq);
    for(k=0;k<strlen(seq);k++){
            ck=0,tt=0;
    for(i=0;i<5;i++){
    for(j=0;j<strlen(str[i]);j++){
   if((int)str[i][j]==32){
   if(seq[k]=='A'){
            if(i==0){
                    tt=1;
            }
   l=str[i][j];
   str[i][j]=str[i-1][j];
   str[i-1][j]=l;
   ck=1;

   break;
   }
   else if(seq[k]=='B'){
        if(i==4)tt=1;

    l=str[i][j];
   str[i][j]=str[i+1][j];
   str[i+1][j]=l;
   ck=1;

   break;
   }
    else if(seq[k]=='R'){
            if(j==4||j==9||j==14||j==19||j==24)tt=1;

    l=str[i][j];
   str[i][j]=str[i][j+1];
   str[i][j+1]=l;

   ck=1;
   break;
   }
    else if(seq[k]=='L'){
            if(j==0||j==5||j==10||j==15||j==20)tt=1;

    l=str[i][j];
   str[i][j]=str[i][j-1];
   str[i][j-1]=l;

   ck=1;
break;
   }
}
if(ck==1)break;
    }
    if(ck==1)break;
    }
    if(tt==1){
            q=1;

            break;
    }
    }
    //if(q==1)printf("no");

    for(i=0;i<5;i++){
            p=0;
    for(j=0;j<strlen(str[i]);j++){
            printf("%c",str[i][j]);
    if(p==4)break;
    p++;
    }
    printf("\n");
    }


}
