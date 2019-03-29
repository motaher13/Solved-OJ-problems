#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        m=n+n/10;
        if((m+1)/10-(m/10)==1)
            printf("%d %d\n",m,m+1);
        else if((m+1)-m/10==n)
            printf("%d\n",m+1);
        else
            printf("%d\n",m);


    }
    return 0;
}
