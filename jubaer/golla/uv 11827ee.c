#include <stdio.h>
#include <string.h>
int main()
{
    int i,ara[110],max,k,j,a,b,t,test,q,l,m,u;
    char str[100000];
    scanf("%d",&test);
    //getchar();
    while(test--)
    {

//        gets(str);
        scanf(" %[^\n]", str);
        q=0;
        j=0;
        for(i=0; str[i]; i++)
        {
            if(str[i]!=' ')
            {
                q=q*10+(int)str[i]-48;
            }
            if((str[i+1]==' '||str[i+1]=='\0')&&q!=0)
             {
                ara[j]=q;
                j++;
                q=0;
            }

        }
        max=0;
        for(k=0; k<j-1; k++)
        {
            for(l=k+1; l<j; l++)
            {
                a=ara[k];
                b=ara[l];
                while (b != 0)
                {
                    t=b;
                    b=a%b;
                    a=t;
                }
                if(max<=a)max=a;
            }

        }
        printf("%d\n",max);

    }
    return 0;
}
