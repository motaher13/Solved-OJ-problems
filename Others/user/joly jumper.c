#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,l,n;
    int ara[5000],d[5000];
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        for(i=0;i<n-1;i++)
            d[i]=abs(ara[i]-ara[i+1]);

        k=0;
        j=d[0]-d[1];
        for(i=0;i<n-1;i++)
            if(j!=d[i]-d[i+1]){
                k=1;
                printf("Not jolly\n");
                break;}

        if(k==0)
            printf("Jolly\n");

    }
    return 0;
}
