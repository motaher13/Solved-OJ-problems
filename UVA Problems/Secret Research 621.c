#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,k,l,m,n;
    char s[1000];
    scanf("%d",&n);
    while(n--)
    {
        j++;
        scanf("%s",s);
        l=strlen(s);
        if(s[l-2]=='3' && s[l-1]=='5')
            printf("-\n");
        else if(s[0]=='9' && s[l-1]=='4')
            printf("*\n");
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
            printf("?\n");
        else if(strcmp(s,"1")==0 || strcmp(s,"4")==0 || strcmp(s,"78")==0)
            printf("+\n");
    }
    return 0;
}
