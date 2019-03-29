#include <stdio.h>
int main()
{
    int i,j,k,ck=0,p,kk=0,tt=0,r=0;
    char str[5][5],l;
    char seq[100];
    for(i=0;i<5;i++){
    gets(str[i]);
    }
    scanf("%s",seq);
    for(k=0;k<strlen(seq)-1;k++){
            ck=0;
   if(seq[k]=='A'){
   for(i=0;i<5;i++){
    for(j=0;j<strlen(str[i]);j++){
   if((int)str[i][j]==32){
     if(i==0){
            printf("no way");
            tt=tt-1;
     kk=1;
     break;
     }
     else{
   l=str[i][j];
   str[i][j]=str[i-1][j];
   str[i-1][j]=l;
   ck=1;
   break;
}
   }
   }
   if(ck==1)break;
   else if(kk==1){
    r=1;
    break;
   }
   }
   }
   else if(seq[k]=='B'){
   for(i=0;i<5;i++){
    for(j=0;j<strlen(str[i]);j++){
   if((int)str[i][j]==32){
if(i==4){
        tt=tt-1;
    printf("no");
kk=1;
break;
}
else{
   l=str[i][j];
   str[i][j]=str[i+1][j];
   str[i+1][j]=l;
   ck=1;
   break;
}
   }
   }
   if(ck==1)break;
   else if(kk==1){
    r=1;
    break;
   }
   }
   }
    else if(seq[k]=='R'){
      for(i=0;i<5;i++){
    for(j=0;j<strlen(str[i]);j++){
   if((int)str[i][j]==32){
if(j==4){
        printf("no");
tt=tt-1;
kk=1;
break;
}
else{
   l=str[i][j];
   str[i][j]=str[i][j+1];
   str[i][j+1]=l;
   ck=1;
   break;
}
   }
   }
   if(ck==1)break;
   else if(kk==1){
    r=1;
    break;
   }
   }
   }
    else if(seq[k]=='L'){
      for(i=0;i<5;i++){
    for(j=0;j<strlen(str[i]);j++){
   if((int)str[i][j]==32){
   if(j==0){
       printf("no");
       tt=tt-1;
   kk=1;
   break;
   }
else{
   l=str[i][j];
   str[i][j]=str[i][j-1];
   str[i][j-1]=l;
   ck=1;
   break;
}
   }
   }
   if(ck==1)break;
else if(kk==1){
        r=1;
    break;
}
   }
   }
   if(r==1)break;
 tt++;
}
//if(kk==1)printf("n0");
if(tt==strlen(seq)-1){

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
else printf("no");
}
