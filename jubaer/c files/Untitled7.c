#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000];
    long long p;
    int ara[10000],i,j,k,r,ara2[10000],n,u,m,d,l;
    while(scanf("%d%lld%d",&n,&p,&m)==3){
    d=0;
    while(p!=0){
  if(p%2==0)str[d]='0';
  else str[d]='1';
    p=p/2;
    d++;
    }
    str[d++]='\0';
    k=0;
    for(i=0,j=0;i<strlen(str);i++,j++){
    if(str[i]=='1'){
    str[i]='0';
    i=0;
    ara[k]=j;
    j=0;
    k++;
    continue;
    }
    }
    u=0;
    for(i=0;i<=ara[k-1];i++){
        if(i==0){
                n=n%m;

        }
        else {
            n=n*n;
            n=n%m;
        }
        for(r=0;r<k;r++){
            if(i==ara[r]){
                ara2[u]=n;
                u++;
               break;
            }
        }
    }
    int mul=1;
   for(r=0;r<u;r++){
    mul=mul*ara2[r];
    mul=mul%m;
   }
   printf("%d\n",mul);
    }
    return 0;
}
