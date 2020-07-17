#include<stdio.h>
#include<string.h>
char s1[10000],s2[1000],o[10000],w[10000];
int main()
{
    int i,j,k,l,m,n,a,b,c,d,p,l1,l2,g;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",o);
        strcpy(s1,"0");
        strcpy(s2,"1");
        printf("%s",s1);

        for(i=0; ;i++)
        {
            g=strcmp(s1,o);
            if(g==0)
                break;
            else
            {
                l1=strlen(s1);
                l2=1;

                c=0,k=0;
            for(i=l1-1,j=l2-1; ;i--,j--)
            {
                a=s1[i]-48;
                b=s2[j]-48;
                if(i<0)
                    a=0;
                if(j<0)
                    b=0;
                if(i<0 && j<0 && c==0)
                    break;


                p=a+b+c;
                w[k]=p%10+48;
                k++;
                c=p/10;

                if(i<0 && j<0)
                    break;
            }
            for(i=0,j=k-1;j>=0;j--,i++)
                s1[i]=w[j];
                s1[i]='\0';

            printf(" %s",s1);
            }
        }
        printf("\n");
    }
    return 0;
}
