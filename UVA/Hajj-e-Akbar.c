#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char s1[]="Hajj";
    char s2[]="Umrah";
    char s4[]="*";
    char s3[6];
    while(1)
    {
        i++;
        scanf("%s",s3);
        if(strcmp(s3,s1)==0)
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(strcmp(s3,s2)==0)
            printf("Case %d: Hajj-e-Asghar\n",i);
        else if(strcmp(s3,s4)==0)
            break;
    }
    return 0;

}
