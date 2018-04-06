#include<stdio.h>
int ara[10000000];
int main()
{
     long long a,b,c=1,d,i,j,t;
     scanf("%lld",&t);
     while(t--){
     scanf("%lld",&a);
     i=0;
     if(a==0){
            ara[i]=0;
            i++;
     }
     while(a!=0){
       if(a%2==0){
        ara[i]=0;
        i++;
        a=-(a/2);
       }
       else {
        ara[i]=1;
        i++;
        a=(a-1)/(-2);
       }
     }
     printf("Case #%lld: ",c++);
     for(j=i-1;j>=0;j--){
        printf("%d",ara[j]);
     }
     printf("\n");
     }
     return 0;
}
