#include <stdio.h>
int main()
{
    int i,sum=0;
    int ar[100];
    for(i=0;i<5;i++){
    scanf("%d",&ar[i]);

    }
    for(i=0;i<5;i++){
    if(ar[i]==1)sum=sum+pow(2,i);
    else sum=sum+0;


    }
    printf("%d",sum);

}
