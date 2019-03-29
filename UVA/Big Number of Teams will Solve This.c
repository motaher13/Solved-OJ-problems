#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,l1,l2,b,c,a,d;
    char s1[50],s2[50];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        gets(s1);
        scanf("%s",s2);
        getchar();
        l1=strlen(s1);
        l2=strlen(s2);
        b=0,c=0,a=0,d=0;
        if(l1>l2)
            b=1;
        for(j=0;j<l2;j++)
        {
            c=0;
            for(k=a;k<l1;k++)
            {
                if(s2[j]==s1[k]){
                    c=1;
                    a=k+1;
                    break;}
                else if(s1[k]==' ')
                    b=1;
            }
            if(c==0){
                d=1;
                break;}
        }

        if(d==1)
            printf("Case %d: Wrong Answer\n",i);
        else if(b==1)
            printf("Case %d: Output Format Error\n",i);
        else
            printf("Case %d: Yes\n",i);

    }
    return 0;
}
