#include<stdio.h>
int main()
{
    long long i,j,l,k;
    long long ara[100000];
    while(scanf("%lld",&i)!=EOF)
    {

        for(j=0; ;j++)
        {
            k=i%16;
           if(k>9)
            {
                ara[j]=k+55;
            }
            else
                ara[j]=k+48;
            i=i/16;
            if(i==0)
                break;

        }
        while(j>=0)
        {
            printf("%c",ara[j]);
            j--;
        }
        printf("\n");

    }
    return 0;
}
