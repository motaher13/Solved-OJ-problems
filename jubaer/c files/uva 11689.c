#include <stdio.h>
int main()
{
    int a,b,r,c,t,sum,k,test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++){
            sum=0;
    scanf("%d%d%d",&a,&b,&c);
    k=a+b;
     while(k>=c){
     t=k/c;
     r=k%c;
     sum=t+sum;
     k=t+r;
     }
     printf("%d\n",sum);
    }
    return 0;
}
