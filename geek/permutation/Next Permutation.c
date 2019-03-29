#include<stdio.h>
int n,ara[20],base,mx,mn;


void swap(int i,int j)
{
    int k=0;

    int temp;
    temp=ara[i];
    ara[i]=ara[j];
    ara[j]=temp;

}

int shouldSwap(int i,int j)
{
    int k;
    for(k=i;k<j;k++)
        if(ara[k]==ara[j])
            return 0;

    return 1;
}


void call(int i)
{
    int j;
    if(i==n-1)
    {
        int no=0;
        for(j=0;j<n;j++)
            no=no*10+ara[j];
        if(no>base && no<mx)
            mx=no;
        if(no<mn)
            mn=no;
//        printf("%d\n",no);
//        for(j=0;j<n;j++)
//            printf("%d ",ara[j]);
//        printf("\n");
    }

    for(j=i;j<n;j++)
    {
        if(shouldSwap(i,j))
        {
            swap(i,j);
            call(i+1);
            swap(i,j);
        }
    }
}

int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);

        base=0,mx=2147483647;
        for(i=0;i<n;i++)
            base=base*10+ara[i];
        mn=base;

        call(0);

        if(mx!=2147483647)
            printf("%d\n",mx);
        else
            printf("%d\n",mn);
    }
}
