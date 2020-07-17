#include <stdio.h>
int main()
{
    int n,i,p,sum,m;
    scanf("%d",&n);
 sum=0;
    for(i=1;i<=n;i++){

    for(p=2;p<n;p++){

    if(i%p!=0)sum=sum+i;



    }




    }

printf("%d",sum);

}
