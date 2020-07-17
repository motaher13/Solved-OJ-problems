#include <stdio.h>
int main()
{
   int a,b,c,d,e,f;
   while(scanf("%d%d%d%d",&a,&b,&c,&d)){
    e=a-c;
   f=b-d;
   if(a==0&&b==0&&c==0&&d==0){
   break;
   }

   if(e<0){
   e=-e;
   }
   if(f<0){
   f=-f;
   }
   if(e==0&&f==0){
    printf("0\n");
   }
    else if(e==f){
   printf("1\n");
   }
   else if((e==0&&f!=0)||(e!=0&&f==0)){
    printf("1\n");
   }
   else printf("2\n");
}
   return 0;
}
