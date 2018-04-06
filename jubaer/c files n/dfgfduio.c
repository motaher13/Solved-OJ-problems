#include <stdio.h>
#define li 65500
char  str[65500];
int  ara2[30000];
char str2[100000];
int main()
{
    long long ara[100000];
    char logic[65500];
    long long p;
    long long i,j,k,l,b,m,u,n,mul,r,num,cou,dam,ck,rock;
    for(i=2;i<=li;i++){
    str[i]='1';
    }
    r=1;
    for(i=2;i<=li;i++){
    if(str[i]=='1'){
    ara2[r]=i;
    r++;
    }
    for(j=2;j*i<=li;j++){
    str[j*i]='0';
    }
    }
   for(rock=2;rock<65000;rock++){
    num=rock;
    if(num%2==0)str2[num]='1';
   else if(str[num]=='1')str2[num]='1';
else{
        ck=1;
  for(dam=2;dam<num;dam++){
        n=dam;
  p=num;
  m=num;
    u=0;
    for(i=0;p!=0;i++){
    if(p%2==0&&i==0){
    n=n%m;
    p=p/2;
    }
    else if(i==0&&p%2!=0){
    ara[u]=n%m;
    n=n%m;
    p=p/2;
    u++;
    }
    else if(p%2==0){
    n=(n*n)%m;
    p=p/2;
    }
    else if(p%2!=0){
    ara[u]=(n*n)%m;
    n=(n*n)%m;
    p=p/2;
    u++;
    }
    }
    mul=1;
    for(l=0;l<u;l++){
        mul=mul*ara[l];
        mul=mul%m;
    }
    if(dam==mul)continue;
    else{
        ck=0;
        break;
    }
   }
   if(ck==0)str2[num]='1';
   else if(ck==1)str2[num]='0';
  }
}
while(scanf("%lld",&num)){
        if(num==0)break;
if(str2[num]=='1')printf("%lld is normal.",num);
else printf("The number %lld is a Carmichael number.",num);
printf("\n");
}
   return 0;
}
