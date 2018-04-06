#include<stdio.h>
int main()
{
    int i,j,k;
    while(1)
    {
        scanf("%d %d %d",&i,&j,&k);
        if(i==0 && j==0 && k==0)
        break;
        if(i*i+j*j==k*k || j*j+k*k==i*i || k*k+i*i==j*j)
        printf("right\n");
        else
        printf("wrong\n");
    }
    return 0;
}
