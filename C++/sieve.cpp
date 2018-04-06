//i=(i==2? 3:i+2)
#include<bits/stdc++.h>
using namespace std;
int ara[10000000]={0};
int ara2[10000000];
int main()
{
    int i,j,k=0,l;
    for(i=2;i<1000;i=(i==2? 3:i+2))
        ara[i]=1;

    for(i=2;i<1000;i=(i==2? 3:i+2))
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

    return 0;
}


