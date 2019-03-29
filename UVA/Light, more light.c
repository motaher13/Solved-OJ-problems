#include<stdio.h>
#include<math.h>
int main()
{
    long long i,j,k,l,m,n;
    while(scanf("%lld",&i)==1)
    {
        if(i==0)
            break;
        j=sqrt(i);
        k=j*j;
        if(k==i)
            printf("yes\n");
        else
            printf("no\n");
    }
   return 0;
}
