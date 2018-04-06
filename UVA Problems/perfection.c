#include<stdio.h>
int a[100000];
int a1[100000];
int main()
{
    int i,j,k,l,m,n,o,s;
    int a2[110];

    for(i=0;i<110;i++)
    {
        scanf("%d",&a2[i]);
        if(a2[i]==0)
            break;
    }
    printf("PERFECTION OUTPUT\n");
    for(j=0;j<i;j++)
    {
        s=0;
        m=1;
        l=a2[j]/2;
        for(k=1;k<=l;k++)
            a[k]=1;
        for(k=1;k<=l;k++)
        {
            if(a[k]==1)
            {
                if(a2[j]%k==0){
                        a1[m]=k;
                        m++;
                        if(k*k==a2[j]){
                            a1[m]=k;
                            m++;}}
                else{
                    for(n=2;n*k<=l;n++)
                        a[n*k]=0;

                    }
            }
        }
    for(o=1;o<m;o++)
        s=s+a1[o];

        if(s==a2[j])
            printf("%5d  PERFECT\n",a2[j]);
        else if(s>a2[j])
            printf("%5d  ABUNDANT\n",a2[j]);
        else if(s<a2[j])
            printf("%5d  DEFICIENT\n",a2[j]);

    }
    printf("END OF OUTPUT");
    return 0;
}
