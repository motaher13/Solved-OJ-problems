#include <stdio.h>
int main()
{
    int i,a,b,c,n;
    scanf("%d",&n);
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++){
    printf("%d",a);
    c=a+b;

    a=b;
    b=c;


    }
    //printf("%d",a);



}

