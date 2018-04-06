#include <stdio.h>
int main()
{
    int i,n,j,sum=0;
    scanf("%d %d",&i,&j);
    for(;i<=j;i++){
        for(n=0;i>1;n++){
          if(i%2==0)i=i/2;
          else i=(3*i)+1;
        }
        printf("%d",n);
       // sum=sum+n;
    }
    //printf("%d",sum);
}

