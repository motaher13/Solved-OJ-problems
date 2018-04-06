#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n;
    char s[1000];
    while(scanf("%s",s)==1)
    {
        l=strlen(s);
        if(l==1 && s[0]=='0')
            break;
        k=0,m=l;
        for(i=0;i<l;i++)
        {
            k=k+(s[i]-48)*(pow(2,m)-1);
            m--;
        }
        printf("%d\n",k);
    }
    return 0;
}
