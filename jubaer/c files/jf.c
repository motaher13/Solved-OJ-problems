#include <stdio.h>
#include <string.h>
char str1[5000][1000],str[100000];
int main()
{
    long long i,j,k,l,p,r,ck;
    p=1;
   while(scanf("%lld",&r)==1){
    l=1;
    sprintf(str,"%lld",r);
    printf("%4lld. ",p);
    for(i=0;i<=strlen(str);i++){
    strcpy(str1[i],"0");
    }
    for(i=strlen(str)-1;i>=0;i--){
    if(l==1){
            if(str[i]=='0'&&str[i-1]=='0'&&i-1!=-1){
    str[i]=' ';
            }
    }
    if(l==2&&str[i]=='0')str[i]=' ';
    if(l==3){
    if(str[i]!='0'){
    strcpy(str1[i],"shata");
    }
    else if(str[i]=='0')str[i]=' ';
    }
    if(l==4){
    if(str[i]=='0'&&str[i-1]=='0'&&i-1!=-1){
    str[i]=' ';
    }
    else if(str[i-1]!='0'&&i-1!=-1){
      strcpy(str1[i],"hajar");
    }
    else if(str[i]!='0'){
     strcpy(str1[i],"hajar");
    }
    }
    if(l==5){
    if(str[i]=='0')str[i]=' ';
    }
    if(l==6){
    if(str[i]=='0'&&str[i-1]=='0'&&i-1!=-1)str[i]=' ';
    else if(str[i-1]!='0'&&i-1!=-1) strcpy(str1[i],"lakh");
    else if(str[i]!='0')strcpy(str1[i],"lakh");
    }
    if(l==7){
    if(str[i]=='0')str[i]=' ';
    }
    if(l==8){
    if(str[i]!='0')strcpy(str1[i],"kuti");
    else if(str[i]=='0'&&str[i-1]!='0'&&i-1!=0)strcpy(str1[i],"kuti");
    else if(str[i]=='0'&&str[i-1]=='0'&&i-1!=0){
    strcpy(str1[i],"kuti");
    str[i]=' ';
    }
    }
    if(l==9){
    if(str[i]=='0')str[i]=' ';
    }
    if(l==9)l=2;
    l++;
    }
    for(i=0;i<strlen(str);i++){
    if(str[i]!=' '){
            printf("%c",str[i]);
            ck=1;
    }
    if(strcmp(str1[i],"0")!=0){
        if(ck==1)printf(" ");
            printf("%s ",str1[i]);
            ck=0;
    }
    }
    printf("\n");
    p++;
   }
   return 0;
}
