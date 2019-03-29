#include <stdio.h>
#include <map>
using namespace std;
map<long long,int>name;
int main()
{
   long long a,b=1,c,d,sum=0,r;
   scanf("%lld",&d);
   while(d--){
   scanf("%lld",&a);
   r=a;
   c=0;
   name[a]=1;
   while(1){
   sum=0;
   while(a!=0){
   sum=sum+((a%10)*(a%10));
   a=a/10;
   }
   if(sum==1){
   c=1;
   break;
   }
   if(name[sum]==1){
   c=0;
   break;
   }
   else name[sum]=1;
   a=sum;
   }
if(c==0)printf("Case #%lld: %lld is an Unhappy number.",b++,r);
else printf("Case #%lld: %lld is a Happy number.",b++,r);
    printf("\n");
    name.clear();
   }
  return 0;
}
