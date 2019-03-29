#include <stdio.h>
#include <string.h>
char str[1000000][15];
int main()

{
    long long k,i,j,r,ck,kk;
    char fore[10000],eng[10000],ch,kh;
    k=0;
    for(i=0;i<10;i++){
        k=k*10+26;
    }
    printf("%lld\n",k);
    for(i=0;i<=200000;i++){
        strcpy(str[i],"0");
    }
    ck=1;
    while(1){
            kk=0,i=0,r=0;
   while(1){

   ch=getchar();
if(ch=='\n'){
        fore[r]='\0';
   if(r==0&&i==0)ck=0;
        break;
}
   if(ch==' '){
    eng[i]='\0';
        kk=1;
   }
   if(kk==0){
   eng[i]=ch;
   i++;
   }
   if(ch=='\n'&&i==0){
        break;
        ck=0;
   }
   else if(kk==1&&ch!=' '){
    fore[r]=ch;
    r++;
   }
   }
   k=0;
  if(ck==1){
   for(j=0;fore[j];j++){
    if(j<4){
        k=k*10+(int)fore[j]-48;
    }
        else k=k+(int)fore[j]-48;

    strcpy(str[k],eng);
   }
  }
    if(ck==0){
            break;
    }
   }
    while(scanf("%s",fore)!=EOF){
            k=0;
        for(i=0;fore[i];i++){
                if(i<4)
            k=k*10+(int)fore[i]-48;
         else  k=k+(int)fore[i]-48;
        }

        if(strcmp(str[k],"0")==0)printf("eh\n");
    else printf("%s\n",str[k]);
    }

return 0;
}
