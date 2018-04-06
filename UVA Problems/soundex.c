#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n;
    char s[100],ara[100];
    while(scanf("%s",s)==1)
    {
        l=strlen(s);
        j=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='H'||s[i]=='W'||s[i]=='Y')
                continue;
            if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
                if(s[i-1]!='B'&&s[i-1]!='F'&&s[i-1]!='P'&&s[i-1]!='V')
                    ara[j]='1';
            if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
                if(s[i-1]!='C'&&s[i-1]!='G'&&s[i-1]!='J'&&s[i-1]!='K'&&s[i-1]!='Q'&&s[i-1]!='S'&&s[i-1]!='X'&&s[i-1]!='Z')
                ara[j]='2';
            if(s[i]=='D'||s[i]=='T')
                if(s[i-1]!='D'&&s[i-1]!='T')
                ara[j]='3';
            if(s[i]=='L')
                if(s[i-1]!='L')
                ara[j]='4';
            if(s[i]=='M'||s[i]=='N')
                if(s[i-1]!='M'&&s[i-1]!='N')
                ara[j]='5';
            if(s[i]=='R')
                if(s[i-1]!='R')
                ara[j]='6';
            if(ara[j]>='1' && ara[j]<='6')
                j++;

        }
        ara[j]='\0';
        printf("%s\n",ara);
    }
    return 0;
}

