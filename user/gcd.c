#include<stdio.h>
int main()
{
    int i,j,k,m,n,p,q;
    scanf("%d %d",&m,&n);
    //p=m*n;
    if(n>m)
    {
        n=n^m;
        m=m^n;
        n=n^m;
    }
    ///printf("%d %d\n",m,n);
    if(n==0)
        printf("%d",m);
    else{
    while(1)
    {
        k=m%n;
        if(k==0)
            break;
        m=n;
        n=k;
    }
    printf("%d",n);}
    //q=p/n;
    //printf("%d",q);
}






