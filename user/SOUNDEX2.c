#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,a,b,l1;
    char s[100][100]={"BFPV","CGJKQSXZ","DT","L","MN","R"};
    char t[100],ara[100];
    while(scanf("%s",t)==1)
    {
        l=strlen(t);
        m=0;
        for(i=0;i<l;i++)
        {
            a=0,b=0;
            for(j=0;j<6;j++)
            {
                l1=strlen(s[j]);
                for(k=0;k<l1;k++)
                    if(t[i]==s[j][k])
                        a=1;
                for(k=0;k<l1;k++)
                    if(t[i-1]==s[j][k])
                        b=1;
                if(a==1 && b==0){
                    ara[m]=j+1+48;
                        m++;
                        break;}
            }
        }
        //ara[m]='\0';
        for(i=0;i<m;i++)
        printf("%c ",ara[m]);

    }


}
