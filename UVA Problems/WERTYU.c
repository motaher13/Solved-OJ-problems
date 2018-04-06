#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l;
    char s[10000];
    while(gets(s))
    {
        l=strlen(s);
        for(j=0;j<l;j++)
        {
            if(s[j]=='W')
                s[j]='Q';
            else if(s[j]=='E')
                s[j]='W';
            else if(s[j]=='R')
                s[j]='E';
            else if(s[j]=='T')
                s[j]='R';
            else if(s[j]=='Y')
                s[j]='T';
            else if(s[j]=='U')
                s[j]='Y';
            else if(s[j]=='I')
                s[j]='U';
            else if(s[j]=='O')
                s[j]='I';
            else if(s[j]=='P')
                s[j]='O';
            else if(s[j]=='[')
                s[j]='P';
            else if(s[j]==']')
                s[j]='[';
            else if(s[j]==92)
                s[j]=']';
            else if(s[j]=='S')
                s[j]='A';
            else if(s[j]=='D')
                s[j]='S';
            else if(s[j]=='F')
                s[j]='D';
            else if(s[j]=='G')
                s[j]='F';
            else if(s[j]=='H')
                s[j]='G';
            else if(s[j]=='J')
                s[j]='H';
            else if(s[j]=='K')
                s[j]='J';
            else if(s[j]=='L')
                s[j]='K';
            else if(s[j]==';')
                s[j]='L';
            else if(s[j]==39)
                s[j]=';';
            else if(s[j]=='X')
                s[j]='Z';
            else if(s[j]=='C')
                s[j]='X';
            else if(s[j]=='V')
                s[j]='C';
            else if(s[j]=='B')
                s[j]='V';
            else if(s[j]=='N')
                s[j]='B';
            else if(s[j]=='M')
                s[j]='N';
            else if(s[j]==',')
                s[j]='M';
            else if(s[j]=='.')
                s[j]=',';
            else if(s[j]=='/')
                s[j]='.';
            else if(s[j]=='1')
                s[j]='`';
            else if(s[j]=='2')
                s[j]='1';
            else if(s[j]=='3')
                s[j]='2';
            else if(s[j]=='4')
                s[j]='3';
            else if(s[j]=='5')
                s[j]='4';
            else if(s[j]=='6')
                s[j]='5';
            else if(s[j]=='7')
                s[j]='6';
            else if(s[j]=='8')
                s[j]='7';
            else if(s[j]=='9')
                s[j]='8';
            else if(s[j]=='0')
                s[j]='9';
            else if(s[j]=='-')
                s[j]='0';
            else if(s[j]=='=')
                s[j]='-';

        }
        printf("%s\n",s);
    }
    return 0;
}

