#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,h,t;
    char ch;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%c%d",&h,&ch,&m);
        if(m==0)
        {
            if(h<12)
                h=12-h;
            if(h<10)
                printf("0%d:00",h);
            else if(h>=10)
                printf("%d:00",h);
        }
        if(m!=0)
        {
            if(h<12)
                h=12-h;
                h--;
            if(h==0)
                h=12;
            m=60-m;
            if(h<10 && m<10)
                printf("0%d:0%d",h,m);
            else if(h<10 && m>=10)
                printf("0%d:%d",h,m);
            else if(h>=10 && m<10)
                printf("%d:0%d",h,m);
            else if(h>=10 && m>=10)
                printf("%d:%d",h,m);

        }
        printf("\n");
    }
    return 0;
}
