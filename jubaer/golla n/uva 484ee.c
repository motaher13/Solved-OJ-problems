#include <stdio.h>

int main()
{
    int ara[100000],l[100000],u[100000];

    int i=0,j,k,ck,t;
    int m=0;
    while(scanf("%d",&ara[i])!=EOF)
    {
        ck=1;

        if(i>0)
        {
            for(k=0; k<m; k++)
            {
                if(u[k]==ara[i])
                {
                    l[k]++;
                    ck=0;
                    break;
                }
            }
        }
        if(ck==1)
        {
            u[m]=ara[i];
            l[m]=1;
            m++;
        }
    i++;
    }
    for(t=0; t<m; t++)
    {
        printf("%d %d\n",u[t],l[t]);
    }
    return 0;
}
