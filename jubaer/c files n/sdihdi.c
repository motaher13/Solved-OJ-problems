#include <stdio.h>
char str[120][2000],str2[100];
int main()
{
    int i=0,j,h,l,k,m,n,ck,kk;
   while(gets(str[i])){
    if(strcmp(str[i],"\0")==0)break;
    i++;
   }
   n=i;
  for(j=0;j<=n;j++){
   ck=0;
   k=0;
   l=0;
   h=1;
   kk=1;
   for(i=0;str[j][i];i++){
        if(str[j][i]==' '){
            kk=1;
            l=0;
            ck=0;
        }
    if(str[j][i]!=' '){
        ck=1;
    }
    if(ck==1&&kk==1)l++;
    if(l==h){
        printf("%c",str[j][i]);
        h++;
        l=0;
        kk=0;
    }

   }
   printf("\n");
  }
}
