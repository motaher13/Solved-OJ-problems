# include <stdio.h>
# include <string.h>
int main()
{
    int i,j,k,m,n,b[120][120],flag = 0;
    char str[120][120],ch;
    for(k=1;scanf("%d %d%c",&m,&n,&ch);k++)
    {
           if(!m && !n)
           return 0;


        for(i=0;i<m;i++)
        gets(str[i]);
        memset(b,0,sizeof(b));

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(str[i][j]=='*')
                {
                         b[i-1][j-1]++;
                         b[i-1][j]++;
                         b[i-1][j+1]++;
                         b[i][j-1]++;
                         b[i][j+1]++;
                         b[i+1][j-1]++;
                         b[i+1][j]++;
                         b[i+1][j+1]++;
                }
            }

        }
        if(flag)  printf("\n");
        printf("Field #%d:\n",k);
          for(i=0;i<m;i++)
         {
            for(j=0;j<n;j++)
            {
                if(str[i][j]=='*')
                {
                    printf("%c",str[i][j]);

                }
                else printf("%d",b[i][j]);
            }
            printf("\n");
         }
        flag = 1;

    }
    return 0;
}
