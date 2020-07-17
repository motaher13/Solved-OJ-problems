#include <stdio.h>
#include <string.h>
int main()
{

    int a,b,c,d,k,ck,i,n,m,r;
    char str[1000000];
    n=0,r=0;
    while(scanf("%s",str)==1)
    {
//  ck1=0,ck2=0,ck3=0,ck4=0,ck5=0,m=0;
if(r>0)printf("\n");
        ck=0;
        a=0;
        for(i=0; i<strlen(str); i++)
        {
            a=a*10+(int)str[i]-48;
            a=a%4;
        }
        b=0;
        for(i=0; i<strlen(str); i++)
        {
            b=b*10+(int)str[i]-48;
            b=b%100;
        }
        c=0;
        for(i=0; i<strlen(str); i++)
        {
            c=c*10+(int)str[i]-48;
            c=c%400;
        }
        if(c==0)
        {
            printf("This is leap year.\n");

        }
        else if(a==0&&b!=0)
        {
            printf("This is leap year.\n");
            ck=1;
        }
        d=0;
        for(i=0; i<strlen(str); i++)
        {
            d=d*10+(int)str[i]-48;
            d=d%15;
        }


        k=0;
        for(i=0; i<strlen(str); i++)
        {
            k=k*10+(int)str[i]-48;
            k=k%55;
        }
        if(m==0||ck==1)
        {
            if(d==0)printf("This is huluculu festival.\n");
            if(k==0)printf("This is bulukulu festival.\n");
        }
        else if(d==0)printf("This is hulukulu festival year.\n");
        else if(k==0)printf("This is bulukulu festival year.\n");

        else
            printf("This is an ordinary year.\n");

        n++;
       r++;
    }
    return 0;
}
