#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,k,l,m,n,b=0;
    char s[10000];
    char s1[10000];
    char a[]="You won't be eaten!";
    char c[]="Uh oh..";
    char d[]="DONE";

    while(gets(s))
    {
        if(strcmp(s,d)==0)
            break;

        l=strlen(s);
        j=0;
        for(i=0;i<l;i++)
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
                s1[j]=tolower(s[i]);
                j++;}
            s1[j]='\0';
        l=strlen(s1);
        k=l/2;
        b=0;
        for(i=0;i<=k;i++)
        {
            if(s1[i]==s1[l-1-i])
                continue;
            else{
                b=1;
                break;}

        }
        if(b==0)
            printf("%s\n",a);
        else if(b==1)
            printf("%s\n",c);
    }
    return 0;
}
