#include <stdio.h>
#include <math.h>
#define li 45000
int ara[li];
char str[100000];
int main()
{
    int i,j,k,l,n,m,p,q,r,s,d,ck,a,b,max;
   for(i=2;i<=li;i++){
   str[i]='1';
   }
   k=0;
   for(i=2;i<=li;i++){
   if(str[i]=='1'){
   ara[k]=i;
   k++;
   for(j=2;j*i<=li;j++){
   str[j*i]='0';
   }
   }
   }
    while(scanf("%d",&n)){
     if(n==0)break;
     int ra=0;
    for(i=0;ara[i]<=n/2;i++){
        q=n-ara[i];
        if(q<0)q=-q;
        ck=1;
        for(j=0;ara[j]<=sqrt(q);j++){
            if(q%ara[j]==0){
                ck=0;
                break;
            }

        }
        if(ck==1)ra++;
        }
       printf("%d\n",ra);
    }
    return 0;
    }
