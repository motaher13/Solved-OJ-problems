#include<stdio.h>
int main()
{
    int i,j,k,l,m,n=1;
    scanf("%d",&k);
    while(k>0)
    {
        l=0;
        scanf("%d %d",&i,&j);
        if(i%2==0)
        {
            i=i+1;
        }
        for( ;i<=j;i=i+2)
        {
            l=l+i;
        }
        printf("Case %d: %d\n",n,l);
        k--;
        n++;
    }
    return 0;
}
