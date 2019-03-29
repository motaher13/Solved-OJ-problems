#include<stdio.h>
int main()
{
    long long i,j,k,l,n=0;
    long long ara[10000];
    char s[10000];
    while(scanf("%s",s)!=EOF)
    {
        l=strlen(s);
        if(l==1){
            if(s[0]=='0')
            break;}

        while(1){
            l=strlen(s);
            if(l==1){
                printf("%c\n",s[0]);
                break;}


        for(j=0;j<l;j++)
        n=n+s[j];
        //printf("%lld\n",n);

        n=n-(l*48);
        //printf("%lld\n",n);

        for(j=0; ;j++)
        {
            s[j]=(n%10)+48;
            n=n/10;
            if(n==0)
                break;
        }
        s[j+1]='\0';
        n=0;
    }
    }
}
