#include<stdio.h>
#include<math.h>
int ara[20000],m,mod[20000];
void quicsort(int strt,int end);
int partition(int strt,int end);

void quicsort(int strt,int end)
{
    int q;
    if(strt<end)
    {
        q=partition(strt,end);
        quicsort(strt,q-1);
        quicsort(q+1,end);
    }
}

int partition(int strt,int end)
{
    int i,j,y,t;
    i=strt-1;

    for(j=strt; j<end; j++)
        if(mod[end]>=mod[j])
        {
            i++;
            t=ara[j];
            ara[j]=ara[i];
            ara[i]=t;

            t=mod[j];
            mod[j]=mod[i];
            mod[i]=t;





            if(mod[i]==mod[end])
            {
                if(ara[i]%2==0 && ara[end]%2==1)
                {
                    t=ara[i];
                    ara[i]=ara[end];
                    ara[end]=t;
                    t=mod[i];
                    mod[i]=mod[end];
                    mod[end]=t;
                }
                if(ara[i]%2==0 && ara[end]%2==0 && ara[i]>ara[end])
                {
                    t=ara[i];
                    ara[i]=ara[end];
                    ara[end]=t;
                    t=mod[i];
                    mod[i]=mod[end];
                    mod[end]=t;
                }
                if(ara[i]%2==1 && ara[end]%2==1 && ara[i]<ara[end])
                {
                    t=ara[i];
                    ara[i]=ara[end];
                    ara[end]=t;
                    t=mod[i];
                    mod[i]=mod[end];
                    mod[end]=t;
                }



            }
        }

    i++;
    t=ara[end];
    ara[end]=ara[i];
    ara[i]=t;

    t=mod[end];
    mod[end]=mod[i];
    mod[i]=t;

    return i;
}

int main()
{
    int i,j,k,l,n,strt,end,t,a;
    while(scanf("%d %d",&n,&m))
    {
        if(n==0 && m==0)
        {
            printf("%d %d",n,m);
            break;
        }
        i=1;
        strt=i;
        end=n;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
            mod[i]=ara[i]%m;
        }
        quicsort(strt,end);


        printf("%d %d\n",n,m);
        for(i=1; i<=end; i++)
            printf("%d\n",ara[i]);
    }
    return 0;
}



