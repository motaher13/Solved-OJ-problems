#include<stdio.h>
int main()
{
    long long i,j,k;
    while(1)
    {
        scanf("%lld",&i);
        if(i==0)
            break;
        else if(i<=100)
            printf("f91(%lld) = 91\n",i);
        else
            printf("f91(%lld) = %lld\n",i,(i-10));

    }
    return 0;
}
