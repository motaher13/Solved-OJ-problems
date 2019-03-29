#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,p,q,b,a,c;
    char s[50];
    char s1[]="A***3**HIL*JM*O***2TUVWXY51SE*Z**89";
    while(scanf("%s",s)==1)
    {
        p=0,m=0,b=0,a=0;
        l=strlen(s);
        for(i=0;i<l/2;i++)
        {
            c=0;
            if(s[i]==s[l-1-i]){
                c=1;
                p++;}
            if(s[i]>=65 && s[i]<=90)
                    if(s1[s[i]-65]==s[l-1-i]){
                        c=1;
                        m++;}
            if(s[i]>=49 && s[i]<=57)
                if(s1[s[i]-23]==s[l-1-i]){
                        c=1;
                        m++;}
            if(c==0)
                break;
        }
        if(c==0)
            printf("%s -- is not a palindrome.\n",s);
        else{
        if(l%2!=0)
            {
                if(s[l/2+1]>=65 && s[l/2+1]<=90)
                if(s1[s[l/2]-65]==s[l/2]){
                        m++;}
                else if(s[l/2+1]>=49 && s[l/2+1]<=57)
                if(s1[s[(l/2)+1]-23]==s[(l/2)+1]){
                        m++;}
                if(m==(l/2)+1)
                    b=1;
            }
        if(l%2==0)
            if(m==l/2)
                b=1;
        if(p==l/2)
            a=1;
        if((a==1 && b==1) || (l==1&&(s[0]=='A'||s[0]=='H'||s[0]=='I'||s[0]=='M'||s[0]=='O'||s[0]=='T'||s[0]=='U'||s[0]=='V'||s[0]=='W'||s[0]=='X'||s[0]=='Y'||s[0]=='1'||s[0]=='8')))
            printf("%s -- is a mirrored palindrome.\n",s);
        else if(a==1 && b!=1)
            printf("%s -- is a regular palindrome.\n",s);
        else if(a!=1 && b==1)
            printf("%s -- is a mirrored string.\n",s);
        else
            printf("%s -- is not a palindrome.\n",s);}
    }
    return 0;
}

