#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,ara[50],p;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    while(n--)
    {
        p=0;
        for(i=0;i<10;i++)
            scanf("%d",&ara[i]);
        if(ara[0]<ara[1]){
            for(i=0;i<10-1;i++){
                if(ara[i]>ara[i+1]){
                    p=1;
                    break;}}}

        else if(ara[0]>ara[1]){
            for(i=0;i<10-1;i++){
                if(ara[i]<ara[i+1]){
                    p=1;
                    break;}}}

        if(p==1)
            printf("Unordered\n");
        else
            printf("Ordered\n");

    }
    return 0;
}
