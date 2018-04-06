#include <stdio.h>
#include <string.h>
char str[4000000];
int main()
{
    int i=0,j,h,l,k,m=1,n,ck,kk,t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--){
            printf("Case #%d:\n",m++);
   while(gets(str)){
    if(strcmp(str,"\0")==0)break;
   ck=0;
   k=0;
   l=0;
   h=1;
   kk=1;
   for(i=0;str[i];i++){
        if(str[i]==' '){
            kk=1;
            l=0;
            ck=0;
        }
    if(str[i]!=' '){
        ck=1;
    }
    if(ck==1&&kk==1)l++;
    if(l==h){
        printf("%c",str[i]);
        h++;
        l=0;
        kk=0;
    }

   }
   printf("\n");
  }
 if(t>0) printf("\n");
    }
    return 0;
}
