#include<stdio.h>
int main()
{
    int i,j,k=1,l,m,n,o;
    int a[1000],a1[10000];
    while(scanf("%d",&n)==1)
    {
        k=1;
        l=n/2;
        for(j=1; j<=l; j++)
            a[j]=1;
        for(j=1; j<=l; j++)
        {
            if(a[j]==1)
            {
                if(n%j==0)
                {
                    a1[k]=j;
                    k++;
                }

                else
                {
                    for(m=2; m*j<=l; m++)
                        a[m*j]=0;
                }
            }
        }
        for(o=1; o<k; o++)
            printf("%d\n",a1[o]);
    }

}
