#include <stdio.h>
#include <string.h>
int main()
{
   int p,q,k,i;
   long long t;
   char str[1000];
   scanf("%lld",&t);
   while(t--){
   scanf("%s",str);
   p=0;
   for(i=0;i<2;i++){
    p=p*10+(int)str[i]-48;
   }
   q=0;
   for(i=3;i<5;i++){
    q=q*10+(int)str[i]-48;
   }
   if(q==0&&p==12){
   printf("%02d:%02d\n",p,q);

   }
   else if(q==0){
   p=12-p;
   printf("%02d:%02d\n",p,q);

   }
   else if(p==12){
   p=p-1;
   q=60-q;
   printf("%02d:%02d\n",p,q);

   }
   else {
   p=p+1;
   if(p==12) printf("%02d:%02d\n",p,60-q);
   else printf("%02d:%02d\n",12-p,60-q);

   }
   }
   return 0;

}
