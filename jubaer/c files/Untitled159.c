#include <stdio.h>
int main()
{
    int sum,num,prod;
    sum=0;
    prod=1;
    for(num=1;num<6;num++){
    sum=sum+num;
    prod=prod*num;
    }
    printf("%d %d ",sum,prod);
    return 0;
}
