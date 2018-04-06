#include<stdio.h>
int main()
{
    int i,j,v=0;
    int a[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            a[j][i]=v;
            printf("a[%d][%d]=%d\n",j,i,v);
            ++v;
        }
    }
    printf("%d",v);

}
