#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,s=0,p,n,l;
    char str[1000];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(str);
        l=strlen(str);
        for(j=0;j<l;j++)
        {
            if(str[j]=='a' || str[j]=='d' || str[j]=='g' || str[j]=='j' || str[j]=='m' || str[j]=='p' || str[j]=='t' || str[j]=='w' || str[j]==' ')
                p=1;

           else if(str[j]=='b' || str[j]=='e' || str[j]=='h' || str[j]=='k' || str[j]=='n' || str[j]=='q' || str[j]=='u' || str[j]=='x')
                p=2;
            if(str[j]=='c' || str[j]=='f' || str[j]=='i' || str[j]=='l' || str[j]=='o' || str[j]=='r' || str[j]=='v' || str[j]=='y')
                p=3;
             if(str[j]=='z' || str[j]=='s')
                p=4;
            s=s+p;
            p=0;
        }
        printf("Case #%d: %d\n",i,s);
        s=0;
    }
    return 0;
}
