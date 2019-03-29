#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,t,r,s,ck=0,p;
    char s1[5][5],d[200][200];
    scanf("%d",&t);
    for(p=1;p<=t;p++)
    {
        for(i=0;i<4;i++)
            scanf("%s",s1[i]);
        printf("\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%s",d[i]);

        for(i=0;i<n;i++)
        {
            ck=0;
            l=strlen(d[i]);
            for(j=0;j<4;j++)
                for(k=0;k<4;k++)
                    if(s1[j][k]==d[i][0])
                        r=j,s=k;
                    /*else{
                        printf("no1\n");
                        ck=1;
                        break;}}*/

            for(j=1;j<l;j++)
            {
                if(s1[r][s+1]==d[i][j])
                    s=s+1;
                else if(s1[r][s-1]==d[i][j])
                    s=s-1;
                else if(s1[r+1][s]==d[i][j])
                    r=r+1;
                else if(s1[r-1][s]==d[i][j])
                    r=r-1;
                else if(s1[r+1][s+1]==d[i][j])
                    r=r+1,s=s+1;
                else if(s1[r+1][s-1]==d[i][j])
                    r=r+1,s=s-1;
                else if(s1[r-1][s+1]==d[i][j])
                    r--,s=s+1;
                else if(s1[r-1][s-1]==d[i][j])
                    r--,s=s-1;
                else{
                    printf("no2\n");
                    ck=1;
                    break;}
            }
            if(ck==1)
                printf("no3\n");
            else if(j==l)
                printf("yes\n");


        }
    }

}



