#include <stdio.h>
int main()
{
    int a,b,i,n,max=0;
    while(scanf("%d%d",&a,&b)!=EOF){
     if(a>b)b=a;
    for(;a<=b;a++){
    n=a;
    for(i=0;n>1;i++)
    {
    //if(n==1)break;
    if(n&1){
            n=(3*n)+1;
     }
    else n=n/2;


    }
    if(max<i)max=i;

    i=0;
    }
    printf("%d",max);
    }




}
