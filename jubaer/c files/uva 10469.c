#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char str1[1000];
    long long sum,i,j,n1,n2,r,ara1[1000],ara2[1000],l,k,d,p,q,t;
    while(scanf("%lld%lld",&q,&p)==2){
   if(q>=p){
        n1=q;

        n2=p;
   }
   else {
    n1=p;
    n2=q;
   }
    for(i=0;n1!=0;i++){
    ara1[i]=n1%2;
    n1=n1/2;
    if(n1==0)break;
    }
    for(l=0;n2!=0;l++){
    ara2[l]=n2%2;
    n2=n2/2;
    if(n2==0)break;
    }
    if(i>l){
    for(d=l+1;d<=i;d++){
    ara2[d]=0;
    }
    }
   for(r=0,j=i;r<=i;r++,j--){
    if(ara1[r]==0&&ara2[r]==0){
        str1[j]='0';
    }
    else if((ara1[r]==0&&ara2[r]==1)||(ara1[r]==1&&ara2[r]==0))str1[j]='1';
    else if((ara1[r]==1&&ara2[r]==1))str1[j]='0';
   }
   str1[i+1]='\0';
    sum=0;
    for(r=strlen(str1)-1,k=0;r>=0;r--,k=k+1){
        if(str1[r]=='1')sum=sum+pow(2,k);
    }
    printf("%lld\n",sum);
    }
    return 0;
}
