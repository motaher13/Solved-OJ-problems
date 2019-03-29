#include<stdio.h>
#include<map>
using namespace std;
map<int ,int>m;
int a[1000000],a1[1000200]= {0};

int main()
{
    int n,i,j,k=0,c;

    for(i=2; i<1000100; i++)
    {
        if(a1[i]==0)
        {
            a[k]=i;
            k++;
            m[i]=1;
            for(j=2; j*i<1000100; j++)
            {
                a1[j*i]=1;
            }
        }
    }
    printf("%d\n",k);
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;

        c=0;

        for(i=0; i<=k; i++)
        {
            j=n-a[i];
            if(a[i]>j)
                break;
            if(m[j]==1)
            {
                c=1;
                printf("%d+%d\n",a[i],j);
                break;
            }
        }
        if(c==0)
            printf("NO WAY!\n");
    }

    //fclose(f);
    return 0;
}

