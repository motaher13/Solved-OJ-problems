#include<stdio.h>
long long ara[20000];
int main()
{
    int i=1,j,k,l,m,n,p,q;
    long long t;
    while(scanf("%lld",&ara[i])==1)
    {
        t=0;
        for(j=i;j>1;j--)
        {
            if(ara[j]>=ara[j-1])
                break;
            if(ara[j]<ara[j-1])
            {
                t=ara[j-1];
                ara[j-1]=ara[j];
                ara[j]=t;
            }
        }

        if(i%2!=0)
            printf("%lld\n",ara[(i/2)+1]);
        if(i%2==0){
            t=(ara[i/2]+ara[(i/2)+1])/2;
            printf("%lld\n",t);}
        i++;
    }
    return 0;
}
