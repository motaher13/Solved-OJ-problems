#include<stdio.h>
#include<string.h>
int main()
{
    long long i,j=0,k=0,l,l1;
    char s[10000],s1[1000];
    while(gets(s))
    {
        l=strlen(s);
        for(i=0;i<=l;i++)
        {
           if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
                s1[j]=s[i];
                j++;}
            else
            {
                s1[j]='\0';
                j=0;
                l1=strlen(s1);
                if(l1>0)
                    k++;
            }
        }
        printf("%lld\n",k);
        k=0;
    }
    return 0;
}
