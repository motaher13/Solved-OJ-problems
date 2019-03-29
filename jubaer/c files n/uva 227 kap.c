#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,ck,p,kk,g,tr,ur=0,du,n;
    char str[1000][1000],l;
    char ch,seq[1000];
    g=1;
    n=5;
    while(1){
           // if(g>1)n=6;
    for(i=0;i<n;i++){

    gets(str[i]);
    //if(i<4)printf("\n");
    }
    printf("%d",i);
    if(ur==2)break;
  if(g>1)printf("\n");
            printf("Puzzle #%d:\n",g);
            k=0;
            while(1){
                ch=getchar();
                seq[k]=ch;
                 k++;
                if(ch=='0')break;

            }
            seq[k++]='\0';
            printf("%d",strlen(seq));

   // gets(seq);
    kk=0,tr=0,du=0;
    for(k=0;k<strlen(seq)-1;k++){


           // if(seq[k]!='A'&&seq[k]!='B'&&seq[k]!='L'&&seq[k]!='R'){
             //   du=2;
            //}


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
    else if(seq[k]=='R'){
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
    else if(seq[k]=='L'){
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

if(kk==2||tr==2||du==2)printf("This puzzle has no final configuration.\n",g);
else {

  for(i=0;i<5;i++){
            p=0;
        for(j=0;j<5;j++){
            printf("%c",str[i][j]);
            if(j<4)printf(" ");
    if(j==4)break;

        }
        if(i==4)break;
        printf("\n");

    }
}

g++;
continue;
    }
    return 0;
}
