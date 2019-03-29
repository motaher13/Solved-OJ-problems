#include<stdio.h>
#include<string.h>
int main()
{
    long long i,j,k,l,n,p;
    char str[20];
    scanf("%lld",&n);
    getchar();
    k=0;
    while(n--)
    {
        gets(str);
        l=strlen(str);
        if(str[0]=='d')
        {
            p=0;
            for(i=7;i<l;i++)
            {
                p=10*p+str[i]-48;
            }
            k=k+p;
        }
        if(str[0]=='r'){
            printf("%lld\n",k);}

    }
    return 0;
}
