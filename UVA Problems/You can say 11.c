#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,sum=0;
    char str[10000];
    while(scanf("%s",str)!=EOF){
        i=strlen(str);
        if(i==1 && str[0]-'0'==0)
        break;

    for(j=0;j<i;j++)
    {
        sum=sum*10+(str[j]-'0');
        sum=sum%11;
    }

    if(sum==0)
        printf("%s is a multiple of 11.\n",str);
    else
    {
        printf("%s is not a multiple of 11.\n",str);
    }
     sum=0;
}
return 0;
}
