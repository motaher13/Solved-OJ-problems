#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,ck,p,kk,g,tr;
    char str[1000][1000],l;
    char seq[1000],ch;
    g=1;
    while(gets(str[0])){
            if(strcmp(str[0],"Z")==0){
                break;
            }

    for(i=1;i<5;i++){
    gets(str[i]);

    }

  if(g>1)printf("\n");
            printf("Puzzle #%d:\n",g);
            k=0;
            while(1){
                ch=getchar();
                seq[k]=ch;

                k++;
                if(seq[k-1]=='0')break;
            }
            seq[k++]='\0';



kk=0,tr=0;
for(k=0;k<strlen(seq)-1;k++){


            ck=0;
   if((int)seq[k]==65){
   for(i=0;i<5;i++){
    for(j=0;j<5;j++){
   if((int)str[i][j]==32&&i>0){

   l=str[i][j];
   str[i][j]=str[i-1][j];
   str[i-1][j]=l;
   ck=1;
   break;
   }
   else if((int)str[i][j]==32&&i==0){
    kk=2;
    ck=1;
    break;
   }
   }
   if(ck==1)break;
   }
   }
else if((int)seq[k]==66){
   for(i=0;i<5;i++){
    for(j=0;j<5;j++){
   if((int)str[i][j]==32&&i<4){

   l=str[i][j];
   str[i][j]=str[i+1][j];
   str[i+1][j]=l;
   ck=1;
   break;
   }
else if((int)str[i][j]==32&&i==4){
   tr=2;
    ck=1;

break;
   }
   }
   if(ck==1)break;
   }
   }
    else if((int)seq[k]==82){
      for(i=0;i<5;i++){
    for(j=0;j<5;j++){
   if((int)str[i][j]==32&&j<4){

   l=str[i][j];
   str[i][j]=str[i][j+1];
   str[i][j+1]=l;
   ck=1;
   break;
   }
    else if((int)str[i][j]==32&&j==4){
    kk=2;
    ck=1;
    break;
   }
   }
   if(ck==1)break;
   }
   }
    else if((int)seq[k]==76){
      for(i=0;i<5;i++){
    for(j=0;j<5;j++){
   if((int)str[i][j]==32&&j>0){

   l=str[i][j];
   str[i][j]=str[i][j-1];
   str[i][j-1]=l;
   ck=1;
   break;
   }
   else if((int)str[i][j]==32&&j==0){
    kk=2;
    ck=1;
    break;
   }
   }
   if(ck==1)break;
   }
   }
}

if(kk==2||tr==2)printf("This puzzle has no final configuration.\n",g);
else {

  for(i=0;i<5;i++){
            p=0;
        for(j=0;j<5;j++){
            printf("%c",str[i][j]);
            if(p<4)printf(" ");
    if(p==4)break;
    p++;
        }
        printf("\n");

    }
}

g++;
gets(str[0]);
    }
    return 0;
}
