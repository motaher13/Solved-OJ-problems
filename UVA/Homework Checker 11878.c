#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,a,b,z=0;
    char c,d,s[4],s1[4];
    while(scanf("%d%c%d%c%s",&a,&c,&b,&d,&s)==5)
    {
        if(c=='+')
            i=a+b;
        else if(c=='-')
            i=a-b;
        sprintf(s1,"%d",i);
        i=strcmp(s,s1);

        if(i==0)
            z++;

    }
    printf("%d\n",z);
    return 0;
}
