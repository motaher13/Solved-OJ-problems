#include <stdio.h>
int main()
{
    int i,sum,a,b,t;
    while(scanf("%d %d",&a,&b)==2){
    sum=0;
    if (a>b){
        t=a;
        a=b;
        b=t;
    }
    for(i=a;i<=b;i++){
    sum=sum+i;
    }
    printf("%d\n",sum);
    }
    return 0;

}
