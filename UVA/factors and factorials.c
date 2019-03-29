#include<stdio.h>
int main()
{
    long long i,j,k,l,m;
    int ara[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

    while(scanf("%lld",&i)!=EOF)
    {
        if(i==0)
        break;
    int ara1[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(k=1;k<=i;k++)
    {
    for(j=0;j<25;j++)
    {
        m=k;
        while(1)
        {
           if(m%ara[j]==0){
            m=m/ara[j];
              ara1[j]++;
        }
            else
            {
                break;
            }
        }
    }
    }

    printf("%3lld! =",i);
    for(j=0;j<25;j++)
    {
        if(ara1[j]==0)
            continue;

    if(j==15){printf("\n%6c",' ');}



        printf("%3lld",ara1[j]);
    }
    printf("\n");
    }
    return 0;
}

