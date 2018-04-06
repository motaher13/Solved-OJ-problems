#include<stdio.h>
void quicsort(int ara[],int strt,int end);
int partition(int ara[],int strt,int end);

void quicsort(int ara[],int strt,int end)
{
    int q;
    if(strt<end)
    {
        q=partition(ara,strt,end);
        quicsort(ara,strt,q-1);
        quicsort(ara,q+1,end);
    }
}

int partition(int ara[],int strt,int end)
{
    int i,j,y,t;
    i=strt-1;

    for(j=strt; j<end; j++)
        if(ara[j]<=ara[end])
        {
            i++;
            t=ara[j];
            ara[j]=ara[i];
            ara[i]=t;
        }

    i++;
    t=ara[end];
    ara[end]=ara[i];
    ara[i]=t;

    return i;
}

int main()
{
    int i,j,k,l,n,ara[1000],strt,end;
    scanf("%d",&n);
    i=1;
    strt=i;
    end=n;
    for(i=1; i<=n; i++)
        scanf("%d",&ara[i]);
    quicsort(ara,strt,end);

    for(i=1; i<=end; i++)
        printf("%d ",ara[i]);

}
