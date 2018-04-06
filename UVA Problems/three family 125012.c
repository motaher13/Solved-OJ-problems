#include<stdio.h>
int main()
{
    int i,j,k,x,y,m,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&m);
        j=m*(x+x-y)/(x+y);
        if(j<=0)
            j=0;
        printf("%d\n",j);
    }
    return 0;
}
