#include<stdio.h>
int ara[10000000];
int ara2[10000000];
int main()
{
    int i,j,k=0,l;
    for(i=2;i<1000;i++)
        ara[i]=1;
      //memset(ara,1,10000);
    for(i=2;i<100;i++)
    {
        if(ara[i]==1)
        {
            ara2[k]=i;
            k++;

            for(j=2;j*i<1000;j++)
                ara[j*i]=0;
        }
    }
    for(j=0;j<k;j++)
        printf("%d  ",ara2[j]);
      printf("\n%d",k);
}
