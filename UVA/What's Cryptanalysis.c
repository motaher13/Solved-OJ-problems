#include<stdio.h>
char str[10000][10000];
int main()
{
    int i,j,k,l,m,n,p,q;
    int ara[10000],al[50],na[50];
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++){
            gets(str[i]);
            getchar();
            ara[i]=strlen(str[i]);}
        for(i=0;i<30;i++)
            al[i]=0;
       // for(i=1;i<30;i++)
         //   na[i]=i;
        for(i=0;i<n;i++)
            for(j=0;j<ara[i];j++)
                {
                    if(str[i][j]>=65 && str[i][j]<=90)
                        al[str[i][j]-64]++;
                    if(str[i][j]>=97 && str[i][j]<=122)
                        al[str[i][j]-96]++;
                }
            for(i=1;i<27;i++)
                printf("%d  ",al[i]);
        /*for(i=1;i<26;i++)
            for(j=i+1;j<27;j++)
                if(al[i]<al[j])
                {
                    q=al[i];
                    al[i]=al[j];
                    al[j]=q;
                    q=na[i];
                    na[i]=na[j];
                    na[j]=na[i];
                }
        for(i=1;i<27;i++)
            printf("%c %d\n",na[i]+64,al[i]);*/
    }
}
