#include<stdio.h>
int sum[100000];
int main()
{
    int i,j,k,l,m,n,p;
    int ara[2000],q[100];
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        scanf("%d",&m);
        for(i=0;i<m;i++)
            scanf("%d",&q[i]);
       // for(i=0;i<m;i++)
         //   printf("%d ",q[i]);

        k=0;
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++){
                sum[k]=ara[i]+ara[j];
               // printf("s=%d %d",sum[k],k);
                k++;}
        //printf("\n%d",k);
        for(i=0;i<k-1;i++)
            for(j=i+1;j<k;j++)
                if(sum[i]>sum[j])
                {
                    p=sum[i];
                    sum[i]=sum[j];
                    sum[j]=p;
                }
        for(i=0;i<k;i++)
            printf("%d ",sum[i]);

        for(i=0;i<m;i++)
        {
            for(j=0;j<k;j++)
            {
                if(sum[j]>q[i] && j==0){
                    p=sum[j];
                        break;}
                else if(sum[j]>q[i] && sum[j-1]<q[i])
                {
                    if(sum[j]-q[i]>sum[j-1]-q[i]){
                        p=sum[j-1];
                        break;}
                    else{
                        p=sum[j];
                        break;}
                }
                else if(sum[j]<q[i] && j==k-1){
                    p=sum[j];
                    break;}

            }
            printf("\nClosest sum to %d is %d.\n",q[i],p);
        }

    }
}









