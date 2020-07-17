#include <stdio.h>
int main()
{
    int a[67];
    scanf("%d %d",&a[0],&a[1]);
    int i,j,k=5,l;
    for(i=1;i<k;i++){
    a[i+1]=a[i]+a[i-1];


    }
    for(i=0;i<k;i++)printf("%d",a[i]);
    printf("%d",a[k-1]);




}
