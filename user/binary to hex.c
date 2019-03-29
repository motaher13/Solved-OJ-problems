#include<stdio.h>
#include<math.h>
int main()
{
    long long i,j,k,l=0;
    char ara[10000];
    while(scanf("%lld",&i)!=EOF){
    for(j=0; ;j++)
    {
        k=i%10;
        l=l+(k*pow(2,j));
        i=i/10;
        if(i==0)
            break;
    }
    for(j=0; ;j++)
        {
            k=l%16;
           if(k>9)
            {
                ara[j]=k+55;
            }
            else
                ara[j]=k+48;
            l=l/16;
            if(l==0)
                break;

        }
        while(j>=0)
        {
            printf("%c",ara[j]);
            j--;
        }
        printf("\n");

    }
}

