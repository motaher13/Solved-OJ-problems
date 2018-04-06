#include<stdio.h>
#include<string.h>
char s[5000000];
int main()
{
    int i,j,k,l,m,n,max;
    int up[30],lo[30];
    while(gets(s))
    {
        l=strlen(s);
        //printf("%d\n",l);
        memset(up,0,sizeof up);
        memset(lo,0,sizeof lo);
        max=0;
        for(i=0;i<l;i++)
        {
            //printf("%d\n",i);
            if((int)s[i]>=65 && (int)s[i]<=90){
                up[(int)s[i]-64]++;
             //   printf("%c %d\n",s[i],up[(int)s[i]-64]);
            if(max<up[(int)s[i]-64])
                max=up[(int)s[i]-64];
                }
            else if((int)s[i]>=97 && s[i]<=122){
                lo[s[i]-96]++;
            if(max<lo[s[i]-96])
                max=lo[s[i]-96];}
        }
        for(i=1;i<=26;i++)
            if(up[i]==max)
                printf("%c",i+64);
        for(i=1;i<=26;i++)
            if(lo[i]==max)
                printf("%c",i+96);
        printf(" %d\n",max);
    }
    return 0;
}
