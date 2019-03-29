#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,a,b,c,d;
    char s[1000];
    char s1[]="e/o/i";
    while(gets(s))
    {
        if(strcmp(s,s1)==0)
            break;

        a=0,b=0,c=0;
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
                if(s[i-1]!='a'&&s[i-1]!='e'&&s[i-1]!='i'&&s[i-1]!='o'&&s[i-1]!='u'&&s[i-1]!='y'){
                    a++;}
            if(s[i]=='/'){
                b++;
            if(b==1)
            {
                if(a!=5){
                    printf("1\n");
                    c=0;
                    break;}
                else
                c=1;
                a=0;
            }
            else if(b==2)
            {
                if(a!=7){
                    printf("2\n");
                    c=0;
                    break;}
                else
                    c=1;
                a=0;


            }}
            else if(i==l-1)
            {
                if(a!=5){
                    printf("3\n");
                    c=0;
                    break;}
            }
        }
            if(c==1)
                printf("Y\n");
    }
    return 0;
}
