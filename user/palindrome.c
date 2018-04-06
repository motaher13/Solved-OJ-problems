#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,k,l,m,n;
    char s[20];
    while(scanf("%s",s)==1)
    {
        j=0;
        l=strlen(s);
        for(i=0;i<l/2;i++)
            if(s[i]!=s[l-1-i]){
                j=1;
                break;}
        if(j==1)
            printf("no\n");
        else
            printf("yes\n");
    }
}
