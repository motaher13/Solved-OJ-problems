#include<stdio.h>
int main()
{
    long long l,w,h,i,j;
    scanf("%lld",&i);
    for(j=1;j<=i;j++)
    {
        scanf("%lld %lld %lld",&l,&w,&h);
        if(l>20|| h>20 || w>20)
            printf("Case %lld: bad\n",j);
        else
            printf("Case %lld: good\n",j);

    }
    return 0;
}
