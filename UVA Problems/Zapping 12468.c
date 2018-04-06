#include<stdio.h>
int main()
{
    int m,n,a,b,i,j;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==-1 && b==-1)
            break;
        if(a>b)
        {
            a=a^b;
            b=b^a;
            a=a^b;
        }
        m=b-a;
        n=100-m;
        if(m<n)
            printf("%d\n",m);
        else
            printf("%d\n",n);
    }
    return 0;
}
