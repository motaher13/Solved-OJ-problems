#include<stdio.h>
int main()
{
    int i,j,k,l,a;
    while(scanf("%d",&a)!=EOF)
    {
        i=a%30;
        if(i%6==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
