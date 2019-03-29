#include<stdio.h>
#include<math.h>
int ara[20000];
void quicsort(int ara[],int strt,int end,int m);
int partition(int ara[],int strt,int end,int m);

void quicsort(int ara[],int strt,int end,int m)
{
    int q;
    if(strt<end)
    {
        q=partition(ara,strt,end,m);
        quicsort(ara,strt,q-1,m);
        quicsort(ara,q+1,end,m);
    }
}

int partition(int ara[],int strt,int end,int m)
{
    int i,j,y,t;
    i=strt-1;
    y=ara[end]%m;
    for(j=strt;j<end;j++)
        if(y>=ara[j]%m)
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
    int i,j,k,l,n,strt,end,m,t,a;
    while(scanf("%d %d",&n,&m))
    {
        if(n==0 && m==0){
            printf("%d %d",n,m);
            break;}
        i=1;
        strt=i;
        end=n;
        for(i=1;i<=n;i++)
            scanf("%d",&ara[i]);
        quicsort(ara,strt,end,m);

       a=1;
        for(i=1;i<=n+1;i++)
            if(ara[i]%m>ara[a]%m  || i==n+1){

                for(j=0;j<i-a;j++)
                    for(k=a;k<i-j-1;k++)
                    {
                        if((ara[k]%2)==0 && (ara[k+1]%2)>0){
                            t=ara[k];
                            ara[k]=ara[k+1];
                            ara[k+1]=t;}

                        else if((ara[k]%2)==0 && (ara[k+1]%2)==0)
                            if(ara[k]>ara[k+1]){
                            t=ara[k];
                            ara[k]=ara[k+1];
                            ara[k+1]=t;}

                        if(ara[k]%2!=0 && ara[k+1]%2!=0)
                            if(ara[k]<ara[k+1]){
                            t=ara[k];
                            ara[k]=ara[k+1];
                            ara[k+1]=t;}
                    }
                     a=i;
                }
            printf("%d %d\n",n,m);
            for(i=1;i<=end;i++)
                printf("%d\n",ara[i]);
        }
    return 0;
}


