#include <stdio.h>
#include <string.h>
int main()
{
   char str[10000],str2[10000];
   int ck,i,j,l,k,m,n,r;
   while(gets(str2)){
    if(strcmp(str2,"e/o/i")==0)break;
   k=0;
   m=0,n=0;
   for(i=0;str2[i];i++){

                    str[k]=str2[i];
           k++;

                if(str2[i+1]=='\0'||str2[i+1]=='/'){
           str[k]='\0';
           n++;
           k=0;
   ck=0;
   l=0;
  for(j=0;j<=strlen(str);j++){
  if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u'||str[j]=='y'){
  ck=1;
  }
  else if((str[j]!='a'&&str[j]!='e'&&str[j]!='i'&&str[j]!='o'&&str[j]!='u'&&str[j]!='y'&&ck==1)||(str[j+1]=='\0'&&ck==1)){
  l++;
  ck=0;
  }
  }
  if(n==1&&l!=5&&m==0){
    m=1;
    r=1;
  }
  else if(n==2&&l!=7&&m==0){
    m=1;
    r=2;
  }
   else if(n==3&&l!=5&&m==0){
    m=1;
    r=3;
  }

  strcpy(str,"\0");
                }
   }
   if(m==0)printf("Y\n");
   else printf("%d\n",r);
   }
   return 0;
}
