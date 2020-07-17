#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

using namespace std;
int main()
{
int i,j,r,d,n,m;
long long l,k,sum;
   while(scanf("%d%d",&n,&m)){
        if(n==0&&m==0)break;
    map<long long,int>name;
    while(n--){
     scanf("%lld",&k);
     name[k]=1;
    }
    sum=0;
while(m--){
        scanf("%lld",&l);
 if(name[l]==1){
        sum=sum+1;
 }
}
printf("%lld",sum);
printf("\n");
name.clear();
   }
   return 0;
}
