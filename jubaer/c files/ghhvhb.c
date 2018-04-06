#include <stdio.h>
int main()
{
    int a=0,b=1,n,i,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){

    printf("%d",a);
    c=a+b;
    a=b;
    b=c;
    if(i==n)printf("%d",a);


    }

    printf("\n\n%d",a);



}
