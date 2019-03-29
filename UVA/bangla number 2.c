#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,t=0,b,c;
    char s[100],o[1000][100];
    while(scanf("%s",s)==1)
    {
        t++;
        b=0,c=0;
        l=strlen(s);
        printf("%4d.",t);
        for(i=0;i<l;i++)
        {
            if(l-1-i==8){
                if(s[i]=='0')
                continue;
                b=1;
                printf(" %c%c kuti",s[i],s[i+1]);
                i++;}

            else if(l-1-i==7 || l-1-i==14){
                if(s[i]=='0')
                continue;
                b=1;
                printf(" %c kuti",s[i]);}

            else if(l-1-i==6 || l-1-i==13){
                    if(s[i]=='0')
                continue;
                b=1;
                printf(" %c%c lakh",s[i],s[i+1]);
                i++;}

            else if(l-1-i==5 || l-1-i==12){
                if(s[i]=='0')
                continue;
                b=1;
                printf(" %c lakh",s[i]);}

            else if(l-1-i==4 || l-1-i==11){
                    if(s[i]=='0')
                continue;
                b=1;
                printf(" %c%c hajar",s[i],s[i+1]);
                i++;}

            else if(l-1-i==3 || l-1-i==10){
                if(s[i]=='0')
                continue;
                b=1;
                printf(" %c hajar",s[i]);}

            else if(l-1-i==2 || l-1-i==9){
                if(s[i]=='0')
                continue;\
                b=1;
                printf(" %c shata",s[i]);}

            else if(l-1-i==1 || l-1-i==8){
                if(s[i]=='0')
                continue;
                b=0;
                c=1;
                printf(" %c",s[i]);}
            else if(l-1-i==0){
                if(s[i]=='0' && b==1)
                continue;
                if(c==0)
                    printf(" ");
                printf("%c",s[i]);}
        }
        printf("\n");
    }
    return 0;
}
