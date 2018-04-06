#include<stdio.h>
#include<string.h>
char a[5000000];
int main()
{
    int i,max,len,b[30],c[30];

    while(gets(a))
    {
        len=strlen(a);
        for(i=0; i<30; i++)
        {
            b[i]=0;
            c[i]=0;
        }
        max=0;
        for(i=0; i<len; i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                b[a[i]-'A']++;
                if(max<b[a[i]-'A'])
                {
                    max=b[a[i]-'A'];
                }
            }
            else if(a[i]>='a' && a[i]<='z')
            {
                c[a[i]-'a']++;
                if(max<c[a[i]-'a'])
                {
                    max=c[a[i]-'a'];
                }
            }
        }
        for(i=0; i<26; i++)
            if(b[i]==max) printf("%c",i+'A');
        for(i=0; i<26; i++)
            if(c[i]==max) printf("%c",i+'a');

        printf(" %d\n",max);
    }
    return 0;
}
