#include<stdio.h>
#include<math.h>
int main()
{
    long long i,j,k,n,m,a=0,b=2,c,ara[10000];
    ara[0]=1;
    ara[1]=2;
    while(scanf("%lld %lld",&n,&m)!=EOF)
   {
        for(i=3;i<=n;i=i+2)
        {
            a=0;
            k=sqrt(i);
            for(j=3;j<=k;j=j+2)
            {
                if(i%j==0)
                    a++;
                    break;
            }
            if(a==0)
            {
                ara[b]=i;
                b++;
            }
        }
        if((n==1 && m==1) || (n==1 && m==2))
        {
            printf("1 1: 1\n\n");
        }
        else{printf("%lld %lld: ",n,m);
        if(2*m>b){
        for(j=0;j<b;j++)
            printf("%lld ",ara[j]);
        }
         else if(b%2==0)
        {
            c=(b/2)-(m-1);
            for(j=c-1;j<c-1+(2*m);j++)
                printf("%lld ",ara[j]);
        }
        else
        {
            c=((b/2)+1)-(m-1);
            for(j=c-1;j<c-2+(2*m);j++)
                printf("%lld ",ara[j]);
        }
         printf("\n\n");
         b=2;
    }
   }
    return 0;
}
