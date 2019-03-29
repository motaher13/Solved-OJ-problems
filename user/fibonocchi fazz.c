#include<stdio.h>
int main()
{
    int n,i,j=1,b=0,z;
    while(scanf("%d",&n)!=EOF){
    for(i=0;i<n-2;i++)
    {
        z=j;
        j=j+b;
        b=z;
    }
    printf("%d\n",j);
    }
    return 0;
}
