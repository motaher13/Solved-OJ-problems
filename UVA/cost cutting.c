#include<stdio.h>
int main()
{
    int i,j,k,l,m,n=1;
    scanf("%d",&m);
    while(n<=m)
   {
    scanf("%d %d %d",&i,&j,&k);
    if(i<j && i>k || i>j &&i<k)
    printf("Case %d: %d\n",n,i);

    else if(j<i && j>k || j>i && j<k)
    printf("Case %d: %d\n",n,j);

    else
    printf("Case %d: %d\n",n,k);
    n++;
   }
    return 0;
}
