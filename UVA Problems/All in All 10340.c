#include<stdio.h>
#include<string.h>
char str[1000000];
int main()
{
    int i,j,k,l,l1,f=0,m;

    while(gets(str))
    {
        l=strlen(str);

        for(i=0;i<l;i++)
        {
            if(str[i]==' ')
                break;
        }

        m=i+1;

        for(j=0;j<i;j++)
        {
            f=0;
            for(k=m;k<l&&f==0;k++)
            {
                if(str[j]==str[k]){
                    f=1;
                    m=k+1;}
            }
            if(f==0)
                break;
        }

        if(f==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
