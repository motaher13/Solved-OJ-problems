#include <stdio.h>
int main()
{
    int i,j,k,l,n,a,b,ara[90],ck=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){

    for(j=2;j<=i/2;j++){
            //if(j==n-1)printf("%d",n);
     if(i%j==0){
            ck=1;
    break;
    }
    }
    if(ck==0)printf("%d\n",i);
    }



}
