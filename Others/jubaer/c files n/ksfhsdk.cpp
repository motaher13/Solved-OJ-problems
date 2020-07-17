#include <stdio.h>
#include <map>
#include <algorithm>
int ara2[10000];
using namespace std;
int main()
{
    map<long long,int>name;
    long long a,b,c,d,e,i,j,r;
    while(scanf("%lld",&a)){
            if(a==0)break;
    b=a;
    r=0;
    printf("Original number was %lld\n",b);
    while(1){
    i=0;
    while(a!=0){
    ara2[i]=a%10;
    a=a/10;
    i++;
    }
   sort(ara2,ara2+i);
   c=0;
   for(j=0;j<i;j++){
    c=c*10+ara2[j];
   }
   d=0;
   for(j=i-1;j>=0;j--){
    d=d*10+ara2[j];
   }
   e=d-c;
  printf("%lld - %lld = %lld\n",d,c,e);
    r++;
   if(name[e]==1)break;
   else name[e]=1;
   a=e;
    }
    printf("Chain length %lld\n\n",r);
    name.clear();
    }
    return 0;
}
