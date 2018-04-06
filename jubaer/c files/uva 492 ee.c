#include <stdio.h>
#include <string.h>
int main()
{
    char str[690000],rev[690000],ck[690000],v,fp;
    int i,j,l,n,kk,d;
 while(gets(str)){
    l=0;
    n=0;
     d=strlen(str);
    for(;1;){
  if(strlen(str)==0)break;
    for(i=l,j=0;i<d;i++,j++){
    rev[j]=str[i];
  l++;
  ck[n]=' ';
    if(((int)str[i]<65)||((int)str[i]>90&&(int)str[i]<97)||((int)str[i]>122)){
        ck[n]=str[i];
        break;
    }

    }

    rev[j++]='\0';
   if(rev[0]=='a'||rev[0]=='e'||rev[0]=='i'||rev[0]=='o'||rev[0]=='u'||rev[0]=='A'||rev[0]=='E'||rev[0]=='I'||rev[0]=='O'||rev[0]=='U'){

kk=1;
   }
   else {
        v=rev[0];
    kk=0;
   }
    if(strlen(rev)==0&&(int)rev[0]==0)printf("%c",ck[n]);

        else if(kk==1)
   printf("%say%c",rev,ck[n]);
   else if(kk==0)printf("%s%cay%c",rev+1,v,ck[n]);
         ck[n]='\0';
  if(str[l]=='\0')break;
    else {
            n++;
          ck[n]='\0';
            continue;
    }
    }
    printf("\n");
 }
    return 0;
}
