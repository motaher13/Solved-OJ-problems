#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,s,b;
    char str[30];
    while(scanf("%s",str)==1)
    {
        l=strlen(str);
        s=0;
        for(i=0;i<l;i++)
        {
            if(str[i]>=65 && str[i]<=90)
                s=s+str[i]-38;
            if(str[i]>=97 && str[i]<=122)
                s=s+str[i]-96;
        }
        b=0;
        for(i=2;i*i<=s;i++)
        {
            if(s%i==0){
                b=1;
                break;}
        }
        if(b==1)
            printf("It is not a prime word.\n");
        else
            printf("It is a prime word.\n");

    }
    return 0;
}
