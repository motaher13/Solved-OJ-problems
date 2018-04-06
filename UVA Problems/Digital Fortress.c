#include<stdio.h>
#include<string.h>
#include<math.h>
char str[20000],sv[1000][1000];
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(str);
        l=strlen(str);
        m=sqrt(l);
        if(m*m!=l)
        {
            printf("INVALID\n");
            continue;
        }
        k=0;
        for(i=0;i<m;i++)
            for(j=0;j<m;j++){
                sv[i][j]=str[k];
                k++;}

        for(i=0;i<m;i++)
            for(j=0;j<m;j++)
                printf("%c",sv[j][i]);
                printf("\n");
    }
    return 0;
}
