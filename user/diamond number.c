#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a=0,b=1;
    scanf("%d",&n);

    for(i=(n/2)+1;i<=n;i++,b++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");

            j--;
        for(k=1;k<=i-j;k++)
            {

                if(k<=b){
                    a++;
                    printf("%d",a%10);}
                else{
                    a--;
                    printf("%d",a%10);}
            }
            a=0;

        printf("\n");
    }

    m=(n/2)+1;
    for(i=n-m;i>=1;i--)
    {
        for(j=1;j<=m-i;j++)
            printf(" ");

        j--;

        for(k=1;k<=n-2*j;k++)
            {
                if(k<=i){
                    a++;
                printf("%d",a%10);}
                else{
                    a--;
                printf("%d",a%10);}
            }
            a=0;
        printf("\n");
    }
}
