#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,t,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);

        printf("%d\n",(m/3)*(n/3));
    }
    return 0;
}
